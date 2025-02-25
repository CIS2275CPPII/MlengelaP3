/**************************************************************************************
* Program: PowerBall
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: September 27th 2022
* Purpose: playing game
***************************************************************************************/
#ifndef POWERBALL_H
#define POWERBALL_H

#include"Header.h"

#include<string>
#include<array>
#include<random>
#include<chrono>
#include<sstream>
#include<ctime>
#include<iostream>

using namespace std;


class Powerball
{
private:
	string player;
	array<int, SIZE> playerWhite{};
	array<int, SIZE> gameWhite{};
	int playerRed;
	int gameRed;
	string result;
	int total;
	default_random_engine engine;
	void Sort(array<int, SIZE> n);
	void GenerateGameNumbers();
	void CheckResults();
public:
	Powerball();
	void SetPlayersName(string n) { player = n; };
	void SetPlayerNumbers(array<int, SIZE> num, int red);
	string DisplayNumbers();
	string DisplayResults() { return result; };
};

#endif // !POWERBALL_H




