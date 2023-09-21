# Get a three-digit number from the user and find the reverse of the number. 
user_input = input("Enter a three-digit number: ")

# Check if the input is a valid three-digit number
if len(user_input) != 3 or not user_input.isdigit():
    print("Please enter a valid three-digit number.")
else:
    # Convert the input to an integer
    number = int(user_input)

    # Calculate the reverse of the number
    reverse_number = int(str(number)[::-1])

    # Print the reverse
    print(f"The reverse of {number} is {reverse_number}")


