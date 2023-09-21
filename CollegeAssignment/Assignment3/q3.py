list1 = [10, 20, 30, 40]
list2 = [100, 200, 300, 400]

# Ensure both lists have the same length
if len(list1) != len(list2):
    print("Lists must have the same length.")
else:
    # Iterate through the indices of the lists
    for i in range(len(list1)):
        # Print items from list1 in original order
        print("list1:", list1[i])

        # Print items from list2 in reverse order
        print("list2:", list2[len(list2) - 1 - i])
