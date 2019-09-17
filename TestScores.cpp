// TestScores.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

int main()
{
    //Variables
	float gradeOne = 0;
	float gradeTwo = 0;
	float gradeThree = 0;
	float averageGrade = 0;

	//Input One
	cout << "Input the first grade: ";
	cin >> gradeOne;

	//Input Two
	cout << "Input the second grade: ";
	cin >> gradeTwo;

	//Input THree
	cout << "Input the third grade: ";
	cin >> gradeThree;

	//Calulation
	averageGrade = (gradeOne + gradeTwo + gradeThree) / 3;

	//Output
	cout << "The average grade is " << averageGrade;

	if (averageGrade > 50) {
		cout << "Passed";
	}
	else if (averageGrade < 50) {
		cout << "Failed";
	}
}