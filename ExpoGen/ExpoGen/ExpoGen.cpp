#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include "ExpoGen.h"

int main()
{
	bool playingAgain = false;
	do
	{
		system("cls");
		greetMessage();
		runGenerator();
		playingAgain = isPlayingAgain();
	} while (playingAgain);
		return 0;
}

bool isPlayingAgain()
{
	using namespace std;
	string playAgain = "";
	cout << "Would you like to convert another Integer? (Y/N)" << endl;
	getline(cin, playAgain);
	return (playAgain[0] == 'y' || playAgain[0] == 'Y');
}

void greetMessage()
{
	using namespace std;
	cout << "Welcome to the Exponential Number Generator" << endl;
}

void runGenerator()
{
	int baseNumber = getBaseNumber();
	int exponent = getExponent();
	generateList(baseNumber, exponent);
}

int getBaseNumber()
{
	using namespace std;
	string inputString = "";
	int baseNumber = 0;
	cout << "Please enter a whole number as the Base Number: ";
	getline(cin, inputString);
	stringstream convert(inputString);
	convert >> baseNumber;
	return baseNumber;
}

int getExponent()
{
	using namespace std;
	string inputString = "";
	int exponent = 0;
	cout << "Please enter the exponent: ";
	getline(cin, inputString);
	stringstream convert(inputString);
	convert >> exponent;
	return exponent;
}

void generateList(int base, int exp)
{
	int i = 1;
	while (i <= exp)
	{
		int currentNumber = std::pow(base, i);
		std::cout << i + "." << currentNumber << std::endl;
		i++;
	}
}







