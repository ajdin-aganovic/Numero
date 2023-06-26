#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void PrizeMoney(int generatedNumber)
{
	int usersNumber=NULL;
	int counter = 1;
	int sum = 100000;
	/*for (int i = 1; i <= numberOfGuesses; i++)
	{
		if (numberOfGuesses == 1)
			cout << "CONGRATULATIONS!!! You guessed it first time.\nYou have won " << sum << "$" << endl;
		else
			cout << "Congratulations!!! You guessed it in your -> " << i << ". guess.\nYou have won " << sum << "$" << endl;
		sum -= 1000;
	}*/
	cout << "Guess the number -> ";
	cin >> usersNumber;
	if(usersNumber==generatedNumber)
		cout << "CONGRATULATIONS!!! You guessed it first time.\nYou have won " << sum << "$" << endl;
	
	else {
		do
		{
			cout << "Incorrect. Try again. ";
			if (usersNumber > generatedNumber)
			{
				cout << "\nYour number is bigger than computers. -> ";
				cin >> usersNumber;
			}
			else
			{
				cout << "\nYour number is smaller than computers. -> ";
				cin >> usersNumber;
			}

			cout << endl;
			counter++;
			sum -= 1000;
		} while (usersNumber != generatedNumber);
		cout << "Congratulations!!! You guessed it in your -> " << counter << ". guess.\nYou have won " << sum << "$" << endl;
	}
}

void main()
{
	cout << "Welcome to Numbero!\nThis is a number guessing game\nand your task is to figure out the computer generated number\nin the least amount of guesses" << endl;
	cout << "Of course, you can set up your range and test your skill/luck by your preferences" << endl;
	int rangeMin, rangeMax = 0;
	cout << "Minimum range -> ";
	cin >> rangeMin;
	cout << "\nMaximum range -> ";
	cin >> rangeMax;
	int generatedNumber = rand() % rangeMax + rangeMin;
	PrizeMoney(generatedNumber);
	
}