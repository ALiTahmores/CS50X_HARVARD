# Birthdays

## Overview
The **Birthdays** problem is part of CS50’s Problem Set 9. In this exercise, you will create a web application that allows users to record and display birthdays. You will use a database to store information, interact with the user through forms, and dynamically display the birthdays on the website.

The goal of this exercise is to practice working with databases, SQL, and web development frameworks like Flask (Python).

---

## Features
- **User Input**: Users can input the names and birthdays of people.
- **Data Storage**: Birthdays will be stored in a database for later retrieval.
- **Search and Display**: Users can search for birthdays, and the application will display the results.
- **Delete Entries**: Users can delete any birthday entries from the database.
- **Responsive Design**: The web application should look good on both desktop and mobile devices.

---

## Files and Structure

### **`app.py`**
The main Python file that runs the Flask web application. This file handles:
- Routes to display and add birthday entries.
- Interacting with the database to store and retrieve birthday data.
- Logic for adding, displaying, and deleting birthdays.

### **`birthdays.db`**
The SQLite database file that stores the birthday data. It should include a table with columns for:
- Name of the person
- Date of birth

### **`index.html`**
The HTML file that serves as the homepage. It contains:
- A form for users to enter names and birthdays.
- A list of stored birthdays.
- An option to delete birthdays.

### **`style.css`**
The CSS file to style the homepage. This file ensures that the page is visually appealing and user-friendly.

---

## How to Use

### 1. **Set Up the Project**
To start the project, ensure that you have Python and the required libraries installed. Follow these steps:

```bash
# Clone the project repository
git clone https://github.com/ALiTahmores/CS50X_HARVARD/tree/main/CS50X_TS/PSET9/birthdays
cd birthdays

# Set up the virtual environment (optional, but recommended)
python -m venv venv
source venv/bin/activate  # On macOS/Linux
venv\Scripts\activate  # On Windows

# Install the required libraries
pip install -r requirements.txt
