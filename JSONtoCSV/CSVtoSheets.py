import os
import csv
import sys
from google.oauth2 import service_account
from googleapiclient.discovery import build

# Authenticate using service account credentials
credentials = service_account.Credentials.from_service_account_file(
    '../../iwabo-419421-c050a64bbfad.json',  # Replace with the path to your credentials file
    scopes=['https://www.googleapis.com/auth/spreadsheets']
)

# Create Google Sheets API service
service = build('sheets', 'v4', credentials=credentials)

# Specify the ID of the Google Sheet
spreadsheet_id = '1r99AGR6T89tDEZpKjTxjeNddMECrmyCdPkcifk7bwVw'  # Replace with your Google Sheet ID

# Specify the range where you want to paste the CSV data
range_name = '!A1'  # Replace 'Sheet1' with your sheet name and 'A1' with the cell where you want to start pasting the data
range_to_clear = '!A:D'

# Specify the path to your local CSV file
csv_file_path = 'output.csv'  # Replace with the path to your CSV file

# Specify the name of the sheet you want to check/create
sheet_name = 'A1D'  # Replace with the name of the sheet you're looking for
if len(sys.argv) > 1:
	sheet_name = sys.argv[1]
print(sheet_name)
# Call the Sheets API to retrieve information about the spreadsheet
spreadsheet = service.spreadsheets().get(spreadsheetId=spreadsheet_id).execute()

# Check if the sheet already exists
sheet_exists = any(sheet['properties']['title'] == sheet_name for sheet in spreadsheet['sheets'])

if sheet_exists:
    print(f"The sheet '{sheet_name}' already exists.")
else:
    # Create the new sheet
    batch_update_request_body = {
        'requests': [{
            'addSheet': {
                'properties': {
                    'title': sheet_name
                }
            }
        }]
    }
    
    response = service.spreadsheets().batchUpdate(
        spreadsheetId=spreadsheet_id,
        body=batch_update_request_body
    ).execute()
    
    print(f"The sheet '{sheet_name}' has been created.")



# Read the CSV file and get its contents
with open(csv_file_path, 'r') as file:
    csv_data = list(csv.reader(file))

clear_request = service.spreadsheets().values().clear(
    spreadsheetId=spreadsheet_id,
    range=sheet_name+range_to_clear,
    body={}
)

clear_response = clear_request.execute()

# Prepare the request to update the Google Sheet
update_request = service.spreadsheets().values().update(
    spreadsheetId=spreadsheet_id,
    range=sheet_name+range_name,
    valueInputOption='RAW',
    body={'values': csv_data}
)

# Execute the request to update the Google Sheet
update_response = update_request.execute()

print('CSV data imported successfully to Google Sheet!')
