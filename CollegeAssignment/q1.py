# Find out the temperature for 12 months of the year and find out the year’s average temperature. 
# Creating list of temperatures of 12 months
monthly_temperatures = [23.5, 26.0, 30.2, 35.8, 40.5, 45.2, 47.0, 46.2, 42.0, 36.5, 29.8, 25.4]

# Calculate the average temperature for the year
yearly_average = sum(monthly_temperatures) / len(monthly_temperatures)

# Print monthly temperatures
for month, temperature in enumerate(monthly_temperatures, start=1):
    print(f"Month {month}: {temperature}°C")

# Print the yearly average temperature
print(f"Yearly Average Temperature: {yearly_average:.2f}°C")
