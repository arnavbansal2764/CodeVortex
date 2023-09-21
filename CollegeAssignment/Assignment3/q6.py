# Define the number of rows
num_rows = int(input())

# Outer loop for rows
for i in range(num_rows, 0, -1):
    # Inner loop for printing asterisks
    for j in range(i):
        print("*", end="")

    # Move to the next line for the next row
    print()
