# Powerball Class:
It is time to reprogram Program1 using a Powerball class.  The play of the game is the same. You may use the functions you wrote for Program 1.  The game’s functionality will be contained in the class.  The Powerball class will randomly determine the game’s numbers, then sort the player’s number choices and the game’s numbers.  It will determine which of the player’s numbers match the game’s numbers and then calculate any winnings.  The class will create a string that reports the results of the lottery.  

### Here is the class declaration:

<img width="875" height="462" alt="image" src="https://github.com/user-attachments/assets/02937c66-7b09-4d65-b02c-35679944ae3b" />

The _WriteHeader_, the _AskName_, and the _AskPlayerNum_ functions are __not__ functions of the Powerball class.  They provide input/output with the user.  They are found in _Functions.h_ and _Functions.cpp_.

In main, start by displaying your WriteHeader function and explaining the rules of the game.  Then call  the _AskName_ function  to ask the user to enter his/her name.  

Instantiate a Powerball object, then set the player’s name into the object using the object to access the _SetPlayersName_ method.

Begin a play loop, then call the _AskPlayerNum_ function to ask the user for his/her powerball input (ie. The numbers for the five white balls and the powerball ).  Note: the user should be able to enter the five white balls in any order. 

Use the object to call _SetPlayersNumbers_, which will set the Player’s numbers into the object.  The Set method will call three private methods:

   •	Sort for the PlayerNumbers</br>
   •	GenerateGameNum, which calls Sort for the game numbers</br>
   •	CheckResults.  

Main calls the DisplayNumbers method  to retrieve a string that can be used to  display the user’s numbers  and the Game’s numbers, and finally calls DisplayResults, which returns a string with the game result information.

When you have presented the results of this Powerball Lottery round, ask the user if he/she wants to play again.  If yes, loop back to the top of the Play loop.  When the user has finished playing, present a Goodbye message and exit.

We will use three new classes: the Array Template class, the Random class, and the Chrono library.

# Sources:
# Usage:
# Contributions: 


