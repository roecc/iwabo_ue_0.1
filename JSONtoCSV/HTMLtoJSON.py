from bs4 import BeautifulSoup

# Path to the local HTML file
file_path = '/private/var/folders/m_/wq956zvx2gbcp8kxj66qpn_80000gn/T/3a468626-902f-403e-8255-1250544cf2d2.html'

# Read the content of the HTML file
with open(file_path, 'r', encoding='utf-8') as file:
    html_content = file.read()

# Parse the HTML content using BeautifulSoup
soup = BeautifulSoup(html_content, 'html.parser')

# Find the element by its id
element = soup.find(id='content')

# Check if the element is found
if element:
    # Get the text content of the element
    text_content = element.get_text().strip()
    
    # Print the text
    print(text_content)
else:
    print("No element found with id 'content'.")
print(soup.prettify())
