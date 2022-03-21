// BonusExercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <algorithm>
#include <iomanip> 
#include <sstream>
using namespace std;

void bonus_exercise_1(char c);
void printLine(int lenght);
void printStartOfTaskLine(int taskNumber);
void printIntSqrCubTable(int lowerLimit, int upperLimit);

int main()
{

	// ---------------------------------------------------Bonus exercise----------------------------------------------------

	printStartOfTaskLine(1);
	bonus_exercise_1('X');

	printStartOfTaskLine(2);
	printIntSqrCubTable(10, 25);
}

void bonus_exercise_1(char c) {

	int counter = c - 'A';

	for (size_t i = 0; i <= counter; i++)
	{
		for (size_t j = 0; j < counter - i; j++)
		{
			cout << ' ';
		}

		for (size_t j = 0; j < i; j++)
		{
			char curC = 'A' + j;
			cout << curC;
		}

		char curMC = 'A' + i;
		cout << curMC;

		for (size_t j = i; j > 0; j--)
		{
			char curC = 'A' + j - 1;
			cout << curC;
		}

		cout << endl;
	}
}

void printIntSqrCubTable(int lowerLimit, int upperLimit) {

	printLine(40);

	cout
		<< left << setw(10) << "Integer"
		<< right << setw(10) << "Square"
		<< setw(20) << "Cube" << endl;

	printLine(40);

	for (size_t i = lowerLimit; i <= upperLimit; i++)
	{

		cout
			<< left << setw(10) << i
			<< right << setw(10) << pow(i, 2)
			<< setw(20) << pow(i, 3) << endl;

		printLine(40);
	}
}

void printLine(int lenght) {
	cout << string(lenght, '-') << endl;
}

void printStartOfTaskLine(int taskNumber) {
	cout << "\n-----------------------------------Start of task " << taskNumber << "----------------------------------------------\n\n\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
