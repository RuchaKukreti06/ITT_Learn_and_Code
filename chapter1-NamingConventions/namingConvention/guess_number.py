import random

def is_within_bounds(guessedNumber):
    if guessedNumber.isdigit() and 1<= int(guessedNumber) <=100:
        return True
    else:
        return False

def main():
    random_number=random.randint(1,100)
    stop_guessing=False
    guessed_number=input("Guess a number between 1 and 100:")
    guess_count=0
    while not stop_guessing:
        if not is_within_bounds(guessed_number):
            guessed_number=input("I wont count this one Please enter a number between 1 to 100")
            continue
        else:
            guess_count+=1
            guessed_number=int(guessed_number)

        if guessed_number<random_number:
            guessed_number=input("Too low. Guess again")
        elif guessed_number>random_number:
            guessed_number=input("Too High. Guess again")
        else:
            print("You guessed it in",guess_count,"guesses!")
            stop_guessing=True


main()