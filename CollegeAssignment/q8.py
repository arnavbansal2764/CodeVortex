# A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10 
# days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days your 
# membership will be cancelled. Write a program to accept the number of days the member is late to 
# return the book and display the fine or the appropriate message.

# Get the number of days late from the user
days_late = int(input("Enter the number of days late: "))

# Define fine rates
fine_rate_1 = 0.5  # 50 paise for the first 5 days
fine_rate_2 = 1.0  # 1 rupee for the next 5 days (6-10 days)
fine_rate_3 = 5.0  # 5 rupees for more than 10 days

# Check for different fine scenarios
if days_late <= 5:
    fine = days_late * fine_rate_1
elif days_late <= 10:
    fine = 5 * fine_rate_1 + (days_late - 5) * fine_rate_2
elif days_late <= 30:
    fine = 5 * fine_rate_1 + 5 * fine_rate_2 + (days_late - 10) * fine_rate_3
else:
    print("Your membership is canceled due to returning the book after 30 days.")
    fine = None  # Membership is canceled

# Display the fine (if membership is not canceled)
if fine is not None:
    print(f"Fine: Rs. {fine:.2f}")
