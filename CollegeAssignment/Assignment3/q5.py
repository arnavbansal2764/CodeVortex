def print_alphabet_pyramid(n):
    for i in range(1, n + 1):
        # Print leading spaces
        print(" " * (n - i), end="")

        # Print alphabets
        for j in range(1, 2 * i):
            print(chr(64 + j), end="")

        # Move to the next line
        print()

try:
    n = int(input("Enter the number of rows for the pyramid: "))
    print_alphabet_pyramid(n)
except ValueError:
    print("Please enter a valid integer.")

