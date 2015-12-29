#Create an infinite loop for the application
while True:
	
	print("Selection: Rock | Paper | Scissors")
	
	#Ask the users for their selection
	PlayerOne = raw_input("Player One Input: ")
	PlayerTwo = raw_input("Player Two Input: ")
	
	#Compare the input of the two users and determine the
	#winner based on the game's rules
	if PlayerOne == PlayerTwo:
		print("Its a tie!")
	elif ((PlayerOne == "Rock" and PlayerTwo == "Scissors") or
	(PlayerOne == "Paper" and PlayerTwo == "Rock") or 
	(PlayerOne == "Scissors" and PlayerTwo == "Paper")):
		print("Player One wins!")
	else:
		print("Player Two wins!")
		
	#Ask the users if they want to try again
	willRepeat = raw_input("Do you want to try again? [yes / no] :")
	if willRepeat == "no":
		break
