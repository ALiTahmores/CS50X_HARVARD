from cs50 import get_string

# Prompt user for valid card number
while True:
    card_number = get_string("Number: ")
    if card_number.isnumeric():
        break

# Initialize sums for Luhn’s Algorithm
sum_even_positions = 0
sum_odd_positions = 0

# Reverse the card number and convert to list of integers
reversed_digits = reversed([int(digit) for digit in card_number])

# Iterate over the reversed digits using Luhn's Algorithm
for index, digit in enumerate(reversed_digits):
    if (index + 1) % 2 == 0:
        doubled_digit = digit * 2
        if doubled_digit > 9:
            sum_odd_positions += int(doubled_digit / 10) + (doubled_digit % 10)
        else:
            sum_odd_positions += doubled_digit
    else:
        sum_even_positions += digit

# Calculate the final checksum
final_sum = sum_even_positions + sum_odd_positions

# Extract card's first two digits and its length
first_two_digits = int(card_number[:2])
card_length = len(card_number)

# Check if the card passes Luhn’s Algorithm
if final_sum % 10 == 0:
    # Check for card types
    if first_two_digits in [34, 37] and card_length == 15:
        print("AMEX")
    elif (first_two_digits in range(51, 56) and card_length == 16):
        print("MASTERCARD")
    elif (int(card_number[0]) == 4 and card_length in [13, 16]):
        print("VISA")
    else:
        print("INVALID")
else:
    print("INVALID")
