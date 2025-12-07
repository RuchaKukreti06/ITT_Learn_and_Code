import random
def roll_dice(number_of_faces):
    result_face=random.randint(1, number_of_faces)
    return result_face


def roll_dice_console():
    number_of_faces=6
    should_roll_dice=True
    while should_roll_dice:
        continue_roll=input("Ready to roll? Enter Q to Quit")
        if continue_roll.lower() !="q":
            result_face=roll_dice(number_of_faces)
            print("You have rolled a",result_face)
        else:
            should_roll_dice=False

roll_dice_console()