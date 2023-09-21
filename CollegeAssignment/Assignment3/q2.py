# find the range of a set of numbers
def find_range(numbers):
    if len(numbers) == 0:
        return None  # Return None if the list is empty
    else:
        min_value = min(numbers)
        max_value = max(numbers)
        return max_value - min_value

# Example list of numbers
numbers = [12, 45, 7, 23, 56, 89, 2, 10]

# Call the function to find the range
range_of_numbers = find_range(numbers)

if range_of_numbers is not None:
    print(f"The range of the numbers is: {range_of_numbers}")
else:
    print("The list is empty.")
