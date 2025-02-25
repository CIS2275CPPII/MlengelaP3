/**************************************************************************************
* Program: PowerBall
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: September 27th 2022
* Purpose: playing game
***************************************************************************************/

#include"Functions.h"
#include<set>

// Header for the rules of the game
void Writeheader()
{
    cout <<

        "We are modelling Powerball, the lottery game using one-dimensional arrays.  In Powerball\n"
        "there is one red ball (the powerball) that can be a value between 1-42.  There are five white\n"
        "balls and their values can be between 1-55.  For two dollars, you pick five white balls ( five\n"
        "different numbers between 1-55) and one powerball number.  Then, twice a week, the game draws\n"
        "one red ball and five white balls.  There are nine ways to win!\n\n"
        "If your white balls and powerball numbers match those called by the game, you the Powerball\n"
        "jackpot!  This jackpot is $23,000,000.  The odds of winning are 1 in 175,223,510.00\n"
        "Match the five white balls in any order, you win $1,000,000.  Odds  are 1 in 5, 153, 632.65\n"
        "Match four white balls in any order plus the powerball, you win $10,000.  Odds are 1 in 648,975.96\n"
        "Match four white balls in any order, you win $100.Odds are 1 in 19,078.53\n"
        "Match three white balls in any order plus the powerball, you win $100.  Odds are 1 in 12,244.83\n"
        "Match three white balls in any order, you win $7.Odds are 1 in 360.14.\n"
        "Match two white balls in any order plus the powerball, you win $7.  Odds are 1 in 706.43\n"
        "Match one white ball and the powerball, you win $4.  Odds are 1 in 110.81\n"
        "Match the powerball only, you win $4.  Odds are 1 in 55.41\n\n";

}
// Ask name for the user. It has input and output
string AskName()
{
    string playerName;
    cout << "Please enter your name to start playing a game: ";
    getline(cin, playerName);
    cout << "Hello " << playerName << "," << " Welcome to C++ PowerBall Lottery Game. \n\n";
    return string(playerName);
}

void AskPlayerNum(array<int, SIZE>& whiteuser, int* powNum)
{
    cout << "Please enter your powerball number (1-42): ";
    cin >> *powNum;
    set<int> history;
    int value = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Please enter white ball #" << (i + 1) << " (1-55): ";
        cin >> value;

        while (history.count(value) > 0)
        {
            cout << "(Duplicate value, please re-enter): ";
            cin >> value;
        }

        whiteuser[i] = value;
        history.insert(value);

    }
      
}

// Ask a player to enter numbers to play
void SetPlayerNumbers(array<int, SIZE> &num, int red)
{
    cout << "Please enter your powerball number (1-42): ";
    cin >> red;
    set<int> history;
    int value = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Please enter white ball #" << (i + 1) << " (1-55): ";
        cin >> value;

        while (history.count(value) > 0)
        {
            cout << "(Duplicate value, please re-enter): ";
            cin >> value;
        }
        num[i] = value;
        history.insert(value);

    }
      
}



