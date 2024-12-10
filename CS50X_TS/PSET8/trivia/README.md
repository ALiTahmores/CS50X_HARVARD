# Movies

## Overview
The **Movies** problem is part of CS50’s Problem Set 7. In this exercise, you will work with a database to manage movies and their associated information, including titles, release years, and genres. The goal of this problem is to build a web application that allows users to search for movies, add new ones, and edit or delete movie information using a relational database.

---

## Features
- **Add Movies**: Users can add new movies to the database.
- **Edit Movie Information**: Users can update details about existing movies.
- **Delete Movies**: Users can delete movies from the database.
- **Search for Movies**: Users can search for movies based on titles, genres, or release years.

---

## Database Structure
The Movies database contains the following table:

### **`movies` Table**  
- **Columns**:
  - `id`: Unique identifier for each movie.
  - `title`: Title of the movie.
  - `release_year`: Year the movie was released.
  - `genre`: Genre of the movie.
  - `description`: Description or brief summary of the movie.
  
---

## How to Use

### 1. **Set Up the Environment**
To begin using this application, you must set up the environment and install the necessary dependencies. The application is built using **Python**, **Flask**, and **SQLite**.

Make sure to create a virtual environment and install the required packages:
```bash
python3 -m venv venv
source venv/bin/activate  # For macOS/Linux
venv\Scripts\activate     # For Windows
pip install -r requirements.txt
