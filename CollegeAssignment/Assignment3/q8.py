#check palindrome
def is_palindrome(number):
    # Convert the number to a string
    num_str = str(number)
    
    # Reverse the string
    reversed_str = num_str[::-1]
    
    # Check if the original and reversed strings are the same
    return num_str == reversed_str

# Input a number to check if it's a palindrome
number = int(input("Enter a number: "))

if is_palindrome(number):
    print(f"{number} is a palindrome.")
else:
    print(f"{number} is not a palindrome.")
