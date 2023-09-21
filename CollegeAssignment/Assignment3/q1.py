#print armstrong numbers between 1 to 500
def is_armstrong_number(number):
    # Convert the number to a string to count its digits
    num_str = str(number)
    num_digits = len(num_str)
    
    # Calculate the sum of each digit raised to the power of the number of digits
    armstrong_sum = sum(int(digit) ** num_digits for digit in num_str)
    
    # Check if the sum is equal to the original number
    return armstrong_sum == number

# Iterate through numbers from 1 to 500 and print Armstrong numbers
for num in range(1, 501):
    if is_armstrong_number(num):
        print(num)
