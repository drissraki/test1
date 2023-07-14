from selenium import webdriver
from selenium.webdriver.common.keys import Keys

# Specify the path to your browser driver executable
# Example: For Chrome, you may use chromedriver.exe
driver_path = '/path/to/driver'

# Create a new instance of the browser driver
driver = webdriver.Chrome(executable_path=driver_path)

# Open the website in the browser
website_url = 'https://www.example.com'
driver.get(website_url)

# Perform an action on the website
element = driver.find_element_by_id('button-id')  # Replace 'button-id' with the actual ID of the button
element.click()

# Additional actions can be performed here, such as filling forms or navigating through the website

# Extract information from the web page
element = driver.find_element_by_xpath('//div[@class="info"]')  # Replace with the appropriate XPath to locate the desired element
text = element.text
print(f"Extracted information: {text}")

# Close the browser
driver.quit()
