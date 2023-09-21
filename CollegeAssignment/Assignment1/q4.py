# Get the principal amount, rate of interest, and number of years from the user and find the simple 
# interest and compound interest

# Get input from the user
principal = float(input("Enter the principal amount: "))
rate_of_interest = float(input("Enter the rate of interest (in percentage): "))
years = float(input("Enter the number of years: "))

# Convert the rate of interest from percentage to decimal
rate_of_interest /= 100

# Calculate simple interest
simple_interest = (principal * rate_of_interest * years)

# Calculate compound interest
compound_interest = principal * (1 + rate_of_interest)**years - principal

# Display the results
print(f"Simple Interest: {simple_interest:.2f}")
print(f"Compound Interest: {compound_interest:.2f}")
