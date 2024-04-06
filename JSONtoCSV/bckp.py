import time
import subprocess
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler

# Define the directory to monitor
directory_to_watch = '/users/Admin/Downloads'

# Define the event handler
class MyHandler(FileSystemEventHandler):
    def on_created(self, event):
        if not event.is_directory:  # Check if the event is a file creation event
            print(f"File created: {event.src_path}")
            script_path = 'CSVtoSheets.py'
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
        time.sleep(5)
except KeyboardInterrupt:
    # Stop the observer if the script is interrupted
    observer.stop()

# Wait for the observer to terminate
observer.join()
