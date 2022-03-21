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
string convertCentToFeet(double input);
string doubleToString(double number, int precision);

int main()
{

	// ---------------------------------------------------Bonus exercise----------------------------------------------------

	printStartOfTaskLine(1);
	bonus_exercise_1('X');

	printStartOfTaskLine(2);
	printIntSqrCubTable(10, 25);

	printStartOfTaskLine(1);

	string inputString = "";

	while (true)
	{	
		cout << "Please enter a height in centimeters:\n";

		getline(cin, inputString);

		stringstream strm(inputString);
		double num = 0;
		strm >> num;

		if (num == 0)
		{
			cout << "bye" << endl;
			printLine(90);
			break;
		}

		cout << convertCentToFeet(num) << endl;
	}
}


string convertCentToFeet(double input) {
	
	string result;

	double feet = input / 30.48;
	double integer;

	double fractional = modf(feet, &integer);
	double inches = fractional * 12;

	result = doubleToString(input, 1) + " cm = " + doubleToString(integer, 0) + " feet, " + doubleToString(inches, 1) + " inches";

	return result;
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

string doubleToString(double number, int precision) {
	stringstream intStream;
	intStream.setf(ios::fixed);
	intStream.precision(precision);
	intStream << number;

	return intStream.str();
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
