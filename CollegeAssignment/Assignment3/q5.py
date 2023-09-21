# Define the number of rows for the pyramid
num_rows = int(input())

# Starting alphabet character
start_char = 'A'

# Outer loop for rows
for i in range(num_rows):
    # Print spaces for indentation
    print(" " * (num_rows - i - 1), end="")

    # Inner loop for printing letters
    for j in range(i + 1):
        # Calculate the corresponding letter using ASCII values
        letter = chr(ord(start_char) + j)

        # Print the letter followed by a space
        print(letter, end=" ")

    # Move to the next line for the next row
    print()
