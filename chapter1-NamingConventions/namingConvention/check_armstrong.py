def calculate_armstrong_sum(input_number):
    armstrong_sum = 0
    number_of_digits = 0

    temporary_number = input_number
    while temporary_number > 0:
        number_of_digits = number_of_digits + 1
        temporary_number = temporary_number // 10

    temporary_number = input_number
    for index in range(1, temporary_number + 1):
        current_digit = temporary_number % 10
        armstrong_sum = armstrong_sum + (current_digit ** number_of_digits)
        temporary_number //= 10
    return armstrong_sum

input_number = int(input("\nPlease Enter the Number to Check for Armstrong: "))

if (input_number == calculate_armstrong_sum(input_number)):
    print("\n %d is Armstrong Number.\n" % input_number)
else:
    print("\n %d is Not a Armstrong Number.\n" % input_number)