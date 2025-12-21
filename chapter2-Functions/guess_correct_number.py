import random

def is_valid_guess(guess):
    return guess.isdigit() and 1 <= int(guess) <= 100

def get_guess():
    while True:
        guess = input("Guess a number between 1 and 100: ")
        if is_valid_guess(guess):
            return int(guess)
        print("Invalid input. Please enter a number between 1 and 100.")

def main():
    target_number = random.randint(1, 100)
    stop_guessing = False
    guess_count = 0

    while not stop_guessing:
        guess = get_guess()
        guess_count += 1

        if guess < target_number:
            print("Too low. Try again.")
        elif guess > target_number:
            print("Too high. Try again.")
        else:
            stop_guessing = True
            print(f"Congratulations! You guessed the number in {guess_count} guesses.")

main()
