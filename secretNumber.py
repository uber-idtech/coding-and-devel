# this import will allow you to use functions defined elsewhere
# for instance, this is a standard module, called sys
import sys

# this is the secret number set by the programmer
secret_number = 3

# the number of attempts that the user has tried
tries = 0

print("The secret number is around 0 - 20")
print("You get three attempts!")

# this just prints an extra line for aesthetics
print("")

# while the user has tried less than three (3) times
while tries < 3:
    # increase the variable tries by 1.
    tries += 1
    
    # asks user to input a number that the computer will read, and then cast user input as an integer
    guess = input("Enter a number:   ")
    guess = int(guess)

    # if the user guesses the secret number correctly, they win and the game ends
    # if they guess incorrectly, they get a total of two extra attempts to try again
    # (for a total of three tries)
    if guess == secret_number:
        print("You win!")
        guessed = True
        break
    else:
        print("Try again!")
        print("")
        
# if the user was unable to find the secret number after three attempts, they lose
# program exits
else:
    print("You ran out of tries, you lose!")
    sys.exit(0)
