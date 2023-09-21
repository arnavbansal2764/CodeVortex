def is_perfect_number(num):
    if num <= 0:
        return False

    # Initialize the sum of divisors
    divisors_sum = 0

    # Find divisors of the number
    for i in range(1, num):
        if num % i == 0:
            divisors_sum += i

    # Check if the sum of divisors is equal to the original number
    return divisors_sum == num

# Input a number to check if it's perfect
number = int(input("Enter a number: "))

if is_perfect_number(number):
    print(f"{number} is a perfect number.")
else:
    print(f"{number} is not a perfect number.")
