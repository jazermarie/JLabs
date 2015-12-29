# Import the Random module
import random 

# Holds the generated random number
randomNumber = random.randint(1, 9)

# Holds the list of user-guessed numbers
guessedNumber = []

while True:
	
	# Ask the user to guess the generated random number
	userGuess = raw_input("Guess the number: ")
	
	# Add the user-guessed number to the list
	guessedNumber.append(userGuess)
	
	if userGuess == "exit":
		# Removed the last appended item
		del guessedNumber[-1]
		
		# Exit from the infinite loop
		break
	elif int(userGuess) > randomNumber:
		print("Number is too high")
	elif int(userGuess) < randomNumber:
		print("Number is too low")
	else:
		print("You guessed the correct number!")
		break
		
print("So far you have " + str(len(guessedNumber)) + " guesses")
	
