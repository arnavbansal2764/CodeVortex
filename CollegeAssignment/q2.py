# Write a Python program to get the values for a, b, c and evaluate the following expression
# 𝑑𝑒𝑙𝑡𝑎=√(𝑏2 −4𝑎𝑐)
import math

# Input values for a, b, and c
a = float(input("Enter the value of a: "))
b = float(input("Enter the value of b: "))
c = float(input("Enter the value of c: "))

# Calculate delta (Δ)
delta_sq = (b**2 - 4*a*c)
if(delta_sq>=0):
    print(math.sqrt(delta_sq))
else:
    print("b^2-4ac is negative")