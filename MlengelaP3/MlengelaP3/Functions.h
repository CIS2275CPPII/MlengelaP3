/**************************************************************************************
* Program: PowerBall
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: September 27th 2022
* Purpose: playing game
***************************************************************************************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Header.h"

using namespace std;

//Functions Prototypes

void Writeheader();
string AskName();
void AskPlayerNum(array<int, SIZE> &whiteuser, int* powNum);

#endif // !FUNCTIONS_H
