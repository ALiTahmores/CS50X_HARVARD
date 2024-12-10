# Finance

## Overview
The **Finance** problem is part of CS50’s Problem Set 9. In this exercise, you will build a web application where users can view their portfolio of stocks, buy and sell stocks, and check their current cash balance. The app will interact with real-time stock data using an API, and users will interact with it through a web interface.

The goal of this exercise is to practice working with databases, handling user authentication, interacting with external APIs, and building a functional web application.

---

## Features
- **User Authentication**: Users can log in and create an account.
- **Stock Trading**: Users can buy and sell stocks, with the price fetched in real-time from an API.
- **Portfolio Management**: Users can view the stock portfolio, including the number of shares owned and the current stock price.
- **Transaction History**: A history of all transactions (buy/sell) is available.
- **Real-time Stock Prices**: The app will use an API to fetch current stock prices for the transactions.
- **Cash Balance**: Users can check their available cash balance, which is updated after each transaction.

---

## Files and Structure

### **`app.py`**
The main Python file that runs the Flask web application. This file handles:
- Routes for login, registration, portfolio management, and stock trading.
- Interacting with the database to store and retrieve user data.
- Communicating with the stock price API to fetch real-time prices.
- Handling transactions such as buying and selling stocks.

### **`finance.db`**
The SQLite database file that stores the user data. It should include tables for:
- Users (storing login information and cash balances).
- Transactions (tracking each stock transaction).

### **`helpers.py`**
Contains helper functions for the application, such as:
- Fetching stock data from the API.
- Formatting and processing data before displaying it.
- Ensuring that users cannot perform invalid actions (e.g., buying more stocks than they can afford).

### **`login.html`**
The HTML file for the login page where users can log in with their username and password.

### **`register.html`**
The HTML file for the registration page where users can create an account.

### **`portfolio.html`**
The HTML file that displays the user's stock portfolio, including the list of owned stocks, the number of shares, and the current stock price.

### **`buy.html`**
The HTML file where users can buy stocks, specifying the number of shares they want to purchase.

### **`sell.html`**
The HTML file where users can sell stocks, specifying the number of shares they want to sell.

### **`style.css`**
The CSS file to style the pages, ensuring a user-friendly and visually appealing interface.

---

## How to Use

### 1. **Set Up the Project**
To start the project, ensure that you have Python and the required libraries installed. Follow these steps:

```bash
# Clone the project repository
git clone https://github.com/ALiTahmores/CS50X_HARVARD/tree/main/CS50X_TS/PSET9/finance
cd finance

# Set up the virtual environment (optional, but recommended)
python -m venv venv
source venv/bin/activate  # On macOS/Linux
venv\Scripts\activate  # On Windows

# Install the required libraries
pip install -r requirements.txt
