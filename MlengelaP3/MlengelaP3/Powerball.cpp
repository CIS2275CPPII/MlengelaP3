/**************************************************************************************
* Program: PowerBall
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: September 27th 2022
* Purpose: playing powerball game
***************************************************************************************/

#include "Powerball.h"
#include<set>

void Powerball::Sort(array<int, SIZE> n)
{
    
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (n[j] > n[j + 1])
            {
                int temp = n[j];
                n[j]     = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

}

void Powerball::GenerateGameNumbers()
{
    // for the white number, 1 - 55
    uniform_int_distribution<unsigned int>forThePowerball(1, 55);
    gameRed = forThePowerball(engine);
    //for the red powerball, 1 - 42
    uniform_int_distribution<unsigned int>forThePowerballs(1, 42);
    gameWhite[0] = forThePowerballs(engine);
    set<int>history;
    for (int i = 0; i < SIZE; i++)
    { 
        int value = 0;
        do
        {
            value = forThePowerballs(engine);
        } while (history.count(value) > 0);

        gameWhite[i] = value;
        history.insert(value);
    }
    
   //call sort white numbers (in array)
    Sort(gameWhite); 
}
void Powerball::CheckResults()
{
    int whiteMatch = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
        {
            if (gameWhite[j] == playerWhite[i]){
                whiteMatch++;
                break;
            }   
        }
    }    

    bool powerMatch = (playerRed == gameRed);

    stringstream ss;

    ss << "white balls matched: " << whiteMatch << ", powerball matched: ";

    if (powerMatch)
        ss << "yes";
    else
        ss << "no";

    if (whiteMatch > 0 || powerMatch)
    {
        string amount = "";

        if (whiteMatch == SIZE)
        {
            if (powerMatch)
                amount = "23,000,000";
            else
                amount = "1,000,000";
        }
        else if (whiteMatch == SIZE - 1)
        {
            if (powerMatch)
                amount = "10,000";
            else
                amount = "100";
        }
        else if (whiteMatch == SIZE - 2)
        {
            if (powerMatch)
                amount = "100";
            else
                amount = "7";
        }
        else
        {
            if (powerMatch)
            {
                if (whiteMatch == SIZE - 3)
                    amount = "7";
                else
                    amount = "4";
            }
        }

        if (amount != "")
            ss << ", won: $" << amount;

        result = ss.str();
    }
}

Powerball::Powerball() // default constructor
{
    unsigned int seed =
    static_cast<unsigned int>(chrono::system_clock::now().time_since_epoch().count());

    engine = default_random_engine(seed);

    playerWhite = { 0 };
    gameWhite = { 0 };

    playerRed = 0;
    gameRed = 0;
    total = 0;
}

void Powerball::SetPlayerNumbers(array<int, SIZE> num, int red)
{
    // remember that we can set;
    playerWhite = num;
    // and set the red one too
    int playerRed = red;
    // call sort of playerWhite
    Sort(playerWhite);
    GenerateGameNumbers();
    CheckResults();   
}

string Powerball::DisplayNumbers()
{
    //create & return string that contains the player's number and game's number);

    stringstream ss;

    ss << "Name : " << player << "\n";
    ss << "Red  : " << playerRed << "\n";
    ss << "White:";

    for (int i = 0; i < SIZE; i++)
        ss << " " << playerWhite[i];

    ss << "\n\n";

    ss << "Name : Computer Game\n";
    ss << "Red  : " << gameRed << "\n";
    ss << "White:";

    for (int i = 0; i < SIZE; i++)
        ss << " " << gameWhite[i];
    ss << "\n";

    return(ss.str());  
}

