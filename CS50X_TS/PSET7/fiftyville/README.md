# Fiftyville

## Overview
**Fiftyville** is a database exercise from CS50’s Problem Set 7. In this assignment, you use SQL queries to solve a fictional mystery set in the town of Fiftyville. By analyzing data stored in a relational database, you work through clues to identify the culprit of a robbery.

---

## Features
- **Interactive Mystery Solving**: Use SQL queries to gather evidence from the database.
- **Relational Database Analysis**: Explore tables like `people`, `transactions`, and `locations` to connect the dots.
- **Hands-On SQL Practice**: Develop and refine your SQL skills in a practical context.

---

## Database Structure
The Fiftyville database contains the following tables:

### Tables
1. **`people`**  
   - Stores information about the residents of Fiftyville.
   - **Columns**:
     - `id`: Unique identifier for each person.
     - `name`: Full name of the person.
     - `age`: Age of the person.
     - `address`: Residential address.

2. **`transactions`**  
   - Tracks financial transactions made by residents.
   - **Columns**:
     - `id`: Unique identifier for each transaction.
     - `sender_id`: ID of the person sending money.
     - `receiver_id`: ID of the person receiving money.
     - `amount`: Amount of money transferred.
     - `timestamp`: Date and time of the transaction.

3. **`locations`**  
   - Logs people's presence at specific locations.
   - **Columns**:
     - `id`: Unique identifier for each record.
     - `person_id`: ID of the person at the location.
     - `location`: Name of the location.
     - `timestamp`: Date and time of the record.

4. **`crime`**  
   - Contains details about the robbery.
   - **Columns**:
     - `id`: Unique identifier for the crime.
     - `type`: Type of the crime.
     - `description`: Description of the incident.
     - `timestamp`: Date and time when the crime occurred.

---

## How to Use
1. **Load the Database**  
   Download the Fiftyville database file (`fiftyville.db`) from the problem set materials.

2. **Set Up the Environment**  
   Use SQLite or the command-line tool to interact with the database:
   ```bash
   sqlite3 fiftyville.db
