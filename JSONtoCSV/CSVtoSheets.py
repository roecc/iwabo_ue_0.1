import os
import csv
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
range_name = 'Sheet2!A1'  # Replace 'Sheet1' with your sheet name and 'A1' with the cell where you want to start pasting the data

# Specify the path to your local CSV file
csv_file_path = 'output.csv'  # Replace with the path to your CSV file

# Read the CSV file and get its contents
with open(csv_file_path, 'r') as file:
    csv_data = list(csv.reader(file))

# Prepare the request to update the Google Sheet
request = service.spreadsheets().values().update(
    spreadsheetId=spreadsheet_id,
    range=range_name,
    valueInputOption='RAW',
    body={'values': csv_data}
)

# Execute the request to update the Google Sheet
response = request.execute()

print('CSV data imported successfully to Google Sheet!')
