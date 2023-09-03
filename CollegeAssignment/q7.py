# If the three sides of a triangle are entered through the keyboard, write a program to check 
# whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the 
# largest of the three sides. 
# Get input for the three sides of the triangle
side1 = float(input("Enter the length of the first side: "))
side2 = float(input("Enter the length of the second side: "))
side3 = float(input("Enter the length of the third side: "))

# Check if the triangle is valid
if (side1 + side2 > side3) and (side1 + side3 > side2) and (side2 + side3 > side1):
    print("The triangle is valid.")
else:
    print("The triangle is not valid.")
