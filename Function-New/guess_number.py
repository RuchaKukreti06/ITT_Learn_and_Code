import random

LOWER_LIMIT = 1
UPPER_LIMIT = 100

def is_valid_guess(user_input):
    return user_input.isdigit() and LOWER_LIMIT <= int(user_input) <= UPPER_LIMIT

def compare_guess(guess, target):
    is_correct_guess = False

    if guess < target:
        print("Too low. Guess again")
    elif guess > target:
        print("Too high. Guess again")
    else:
        is_correct_guess = True

    return is_correct_guess

def get_user_guess():
    return input(f"Guess a number between {LOWER_LIMIT} and {UPPER_LIMIT}: ")

def main():
    target_number = random.randint(LOWER_LIMIT, UPPER_LIMIT)
    number_of_guesses = 0

    guess = get_user_guess()

    while True:
        if not is_valid_guess(guess):
            guess = input(
                "I won't count this one. Please enter a number between 1 and 100: "
            )
            continue

        number_of_guesses += 1
        guess = int(guess)

        if compare_guess(guess, target_number):
            print(f"You guessed it in {number_of_guesses} guesses!")
            break

        guess = get_user_guess()

main()
