/*

Algorithm was designed in the following series of steps:
1) Define and initialize variables for column and rows
2) Determine number of rows needed and corresponding + symbols for pattern A
3) Determine number of cols needed and corresponding + symbols for pattern A
4) Determine number of rows needed and corresponding + symbols for pattern B
5) Determine number of cols needed and corresponding + symbols for pattern B
6) Output both pattern A and B 

Functions/Formulas

Function in this case was only the main function with variable for columns and rows 



Revision History:
January 30, 2019: First working edition created
February 3, 2019: Final version revised and completed


*/

#include<iostream>
using namespace std;
int main()
{

	// Defines and intializes number of columns 
	int col = 10;

	// Defines and intializes number of rows 
	int row = 10;

	// Outputs text indicate to user that pattern A is displayed
	cout << endl << "Pattern A:" << endl;

	// Outer for loop indicates number rows required
	for (int row = 0; row<10; row++)
	{
		// Nested/inner for loop determines columns
		for (int col = 0; col<row; col++)

			// Output a + character symbol corresponding to rows
			cout << "+";
		cout << endl;
	}

	// Outputs text indicate to user that pattern B is displayed
	cout << endl << "Pattern B:" << endl;

	// Outer for loop indicates number rows required
	for (int row = 10; row >= 1; row--)
	{

		// Nested/inner for loop determines columns
		for (int col = 1; col<row; col++)

			// Output a + character symbol corresponding to rows
			cout << "+";
		cout << endl;
	}


	return 0;
}