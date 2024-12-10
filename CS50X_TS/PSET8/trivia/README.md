# Trivia

## Overview
The **Trivia** problem is part of CS50’s Problem Set 8. In this exercise, you will build a web application that allows users to play a trivia game, answering questions and receiving feedback on whether their answers are correct. The application uses a database to store trivia questions and answers, and it will allow users to interact with the game through a simple interface.

---

## Features
- **Play Game**: Users can start a trivia game and answer a series of multiple-choice questions.
- **Correct/Incorrect Feedback**: The game provides feedback for each question, indicating whether the user's answer is correct or incorrect.
- **Score Tracking**: The game keeps track of the player's score and displays it at the end of the game.
- **Question Pool**: The trivia questions are stored in a database, and the questions are randomly selected for each game session.

---

## Database Structure
The Trivia database contains the following table:

### **`questions` Table**
- **Columns**:
  - `id`: Unique identifier for each question.
  - `question`: The trivia question text.
  - `answer`: The correct answer to the question.
  - `choice1`: The first alternative answer choice.
  - `choice2`: The second alternative answer choice.
  - `choice3`: The third alternative answer choice.

---

## How to Use

### 1. **Set Up the Environment**
Before running the application, ensure you have the necessary dependencies installed. The application is built using **Python**, **Flask**, and **SQLite**.

First, create a virtual environment and install the required packages:
```bash
python3 -m venv venv
source venv/bin/activate  # For macOS/Linux
venv\Scripts\activate     # For Windows
pip install -r requirements.txt
