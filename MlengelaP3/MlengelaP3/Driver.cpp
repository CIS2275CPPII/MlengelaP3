/**************************************************************************************
* Program: PowerBall
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: September 27th 2022
* Purpose: playing powerball game
***************************************************************************************/

#include"Header.h"
#include"Functions.h"
#include"Powerball.h"

int main()
{
	
    Writeheader();
    Powerball powerball;
    powerball.SetPlayersName(AskName());
    
	do
	{
        array<int, SIZE> num = { 0 };
        int red = { 0 };

        AskPlayerNum(num, &red); // function call
        cin.clear();
        powerball.SetPlayerNumbers(num, red);

        cout << powerball.DisplayNumbers() << "\n";
        cout << powerball.DisplayResults() << "\n";


        // We need to ask the user if they want to play again. 
        string answer;
        cout << "Do you want to play again? ";
        cin >> answer;
        cin.ignore();

        if (answer[0] != 'y' && answer[0] != 'Y') {
            break;
        } 
	} while (true);
    // Say good bye to the user and thank them

    cout << "\nThank you for playing. Goodbye!\n";
	return 0;
}