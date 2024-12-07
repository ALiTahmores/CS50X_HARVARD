from cs50 import get_string

# Get input text from user
input_text = get_string("Text: ")

# Initialize counters
letter_count = 0
for char in input_text:
    if char.isalpha():
        letter_count += 1

# Count words by splitting the text by spaces
word_count = len(input_text.split())

# Initialize sentence counter
sentence_count = 0
for char in input_text:
    if char in ['.', '!', '?']:
        sentence_count += 1

# Calculate average letters and sentences per 100 words
words_per_hundred = word_count / 100
avg_letters_per_100_words = letter_count / words_per_hundred
avg_sentences_per_100_words = sentence_count / words_per_hundred

# Calculate Coleman-Liau index
readability_index = round(0.0588 * avg_letters_per_100_words -
                          0.296 * avg_sentences_per_100_words - 15.8)

# Output the reading grade level
if readability_index < 1:
    print("Before Grade 1")
elif readability_index >= 16:
    print("Grade 16+")
else:
    print(f"Grade {readability_index}")
