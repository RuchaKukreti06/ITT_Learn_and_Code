import random

LOWER_LIMIT = 1
UPPER_LIMIT = 100
LOW = "low"
HIGH = "high"
CORRECT = "correct"

def get_user_guess():
    return input(f"Guess a number between {LOWER_LIMIT} and {UPPER_LIMIT}: ")

def is_valid_guess(user_input):
    return user_input.isdigit() and LOWER_LIMIT <= int(user_input) <= UPPER_LIMIT

def get_valid_guess():
    while True:
        guess=input(f"I won't count this one. Please enter a number between {LOWER_LIMIT} and {UPPER_LIMIT}: ")
        if is_valid_guess(guess):
            return guess

def evaluate_guess(guess, target):
    guess_result=""
    if guess < target:
        guess_result=LOW
    elif guess > target:
        guess_result= HIGH
    else:
        guess_result=CORRECT

    return guess_result

def display_guess_result(guess_result, number_of_guesses):
    if guess_result == CORRECT:
        print(f"You guessed it in {number_of_guesses} guesses!")
    else:
        print(f"Too {guess_result}. Guess again")

def guess_the_number():
    target_number = random.randint(LOWER_LIMIT, UPPER_LIMIT)
    number_of_guesses = 0

    guess = get_user_guess()

    while True:
        if not is_valid_guess(guess):
            guess = get_valid_guess()

        number_of_guesses += 1
        guess = int(guess)

        guess_result=evaluate_guess(guess, target_number)
        display_guess_result(guess_result, number_of_guesses)
        
        if guess_result==CORRECT:
            break
        
        guess = get_user_guess()

guess_the_number()
