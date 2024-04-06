import time
import subprocess
import shutil
import os
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler

# Define the directory to monitor
directory_to_watch = '/users/Admin/Downloads'
destination_directory = '/users/Admin/Documents/projects/iwabo/unreal/iwabo_ue_0.1/JSONtoCSV'

target_file_name = 'content.json'

def read_file_as_string(file_path):
        with open(file_path, 'r') as file:
            file_content = file.read()
        return file_content

def write_string_to_file(file_path, content):
    with open(file_path, 'w') as file:
        file.write(content)

def delete_file(file_path):
    if os.path.exists(file_path):
        os.remove(file_path)
        print(f"Deleted file: {file_path}")

# Define the event handler
class MyHandler(FileSystemEventHandler):
    def on_created(self, event):
        if not event.is_directory:  # Check if the event is a file creation event
            if os.path.exists(event.src_path):
                if os.path.basename(event.src_path) == target_file_name:
                    print(f"File created: {event.src_path}")
                    source_content = read_file_as_string(event.src_path)
                    write_string_to_file('file.json', source_content)
                    #time.sleep(5)
                    print("Content replaced successfully.")
                    time.sleep(10)
                    delete_file(event.src_path)
                    script_path = 'JSONtoCSV.py'
                    subprocess.call(['python3', script_path])

# Create an observer
observer = Observer()

# Schedule the event handler to watch the directory
observer.schedule(MyHandler(), directory_to_watch, recursive=True)

# Start the observer
observer.start()

try:
    # Keep the script running
    while True:
        time.sleep(1)
except KeyboardInterrupt:
    # Stop the observer if the script is interrupted
    observer.stop()

# Wait for the observer to terminate
observer.join()




