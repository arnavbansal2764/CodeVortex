# Write a python program to find the roots of a quadratic equation.

import math

# Input values for a, b, and c
a = float(input("Enter the value of a: "))
b = float(input("Enter the value of b: "))
c = float(input("Enter the value of c: "))

# Calculate delta (Δ)
delta = b**2 - 4*a*c

# Check if delta is negative, positive, or zero
if delta > 0:
    # Two real and distinct roots
    root1 = (-b + math.sqrt(delta)) / (2*a)
    root2 = (-b - math.sqrt(delta)) / (2*a)
    print(f"Two real and distinct roots: {root1}, {root2}")
elif delta == 0:
    # One real root (repeated)
    root = -b / (2*a)
    print(f"One real root (repeated): {root}")
else:
    # Complex roots
    real_part = -b / (2*a)
    imaginary_part = math.sqrt(abs(delta)) / (2*a)
    root1 = complex(real_part, imaginary_part)
    root2 = complex(real_part, -imaginary_part)
    print(f"Complex roots: {root1}, {root2}")
