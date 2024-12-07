from cs50 import get_float

# Prompt user for valid input
while True:
    a = get_float("Change: ")
    if a > 0:
        break

# Convert dollars to cents and round
cents = round(a * 100)

# Coin counter
coin = 0

# Coin values in cents
coin_values = [25, 10, 5, 1]

# Calculate the number of coins
for value in coin_values:
    coin += cents // value  # Add number of coins for current denomination
    cents %= value  # Update remaining cents

# Print total number of coins
print(coin)
