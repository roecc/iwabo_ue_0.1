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
csv_header = ['nodeID', 'en_line', 'link', 'condition', 'speaker']

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
		writer.writerow([nodeID, en_line, link, '', speaker])
		speaker = 3
		optID = 1
		for option in item['links']:
			line_arr = option['linkText'].split("\\|")
			en_line = line_arr[0]
			#add conditional if specified
			if (len(line_arr) > 1):
				condition = line_arr[1]
			else:
				condition = ''
			if (option['linkText'] == '-'):
				en_line = ''
				optID = 0
			link = option['passageName']
			writer.writerow([(nodeID + '_' + str(optID)), en_line, link, condition, speaker])
			optID += 1

	# Write data to CSV file
	#for item in data:
		#if isinstance(item, dict):  # Check if item is a dictionary
		#name = item.get('name', '')
		#tags = ','.join(item.get('tags', []))
		#text = item.get('text', '')

		#writer.writerow([name, tags, text])

print("CSV file has been generated successfully.")

sheet_name = data['name']
script_path = 'CSVtoSheets.py'
subprocess.call(['python3', script_path, sheet_name])