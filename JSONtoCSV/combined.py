import json
import csv
import subprocess

# Define the path to your JSON file
file_path = 'file.json'  # Assuming the JSON file is named "file.json" and located in the same folder as your script

# Open and read the JSON file
with open(file_path, 'r') as json_file:
    data = json.load(json_file)

# Define CSV file path
csv_file_path = 'output.csv'

# Define CSV header
csv_header = ['nodeID', 'en_line', 'link', 'speaker']

# Open CSV file in write mode
with open(csv_file_path, 'w', newline='') as csv_file:
	writer = csv.writer(csv_file)

	# Write header to CSV file
	writer.writerow(csv_header)
	
	#print(data['passages'] + "\n")
	for item in data['passages']:
		nodeID = item['name']
		en_line = item['text'].split('\n')[0]
		if(item['tags'].split(',')[0] == "MA"):
			speaker = 0
		elif(item['tags'].split(',')[0] == "A"):
			speaker = 1
		elif(item['tags'].split(',')[0] == "J"):
			speaker = 2
		elif(item['tags'].split(',')[0] == "D"):
			speaker = 3
		link = ''
		writer.writerow([nodeID, en_line, link, speaker])
		speaker = 3
		optID = 1
		for option in item['links']:
			en_line = option['linkText']
			if (option['linkText'] == '-'):
				en_line = ''
				optID = 0
			link = option['passageName']
			writer.writerow([(nodeID + '_' + str(optID)), en_line, link, speaker])
			optID += 1

	# Write data to CSV file
	#for item in data:
		#if isinstance(item, dict):  # Check if item is a dictionary
		#name = item.get('name', '')
		#tags = ','.join(item.get('tags', []))
		#text = item.get('text', '')

		#writer.writerow([name, tags, text])

print("CSV file has been generated successfully.")


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
