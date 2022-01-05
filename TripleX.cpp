#include <iostream>
#include <cmath>
#include <string>
#include <vector>


using namespace std;

// Function declaration


int main() {
	// your code goes here

	// Integer declaration
	const int CodeA = 4;
	const int CodeB = 3;
	const int CodeC = 2;
	const int CodeSum = CodeA + CodeB + CodeC; 
	const int CodeProduct = CodeA * CodeB * CodeC;
	const int S = 3;

	// Char & String declaration
	string MessageA = "You are a secret agent breaking into a secure server room...";
	string MessageB = "Enter the correct code to continue...";
	string MessageC = "There are 3 numbers in the code";
	string MessageD = "The codes add-up to: ";
	string MessageE = "The codes multiply to give: ";
	string MessageF = "Congratulations you cracked the code and you WIN!";
	string MessageG = "You Lose!";
	string MessageH = "Error: enter a valid input: ";

	// Vector declaration
	vector<int> Vec;

	// Welcome message printed to screen
	cout << MessageA << endl;
	cout << MessageB << endl << endl;
	
	// Print hints to screen
	cout << MessageC << endl;
	cout << MessageD << CodeSum << endl;
	cout << MessageE << CodeProduct << endl;

	// Declare variables that store player input.
	int GuessA, GuessB, GuessC;
	int X;

	// Bool condition used to recieves input & checks for valid input within a for loop
	while (true) {
			for (int i = 0; i < S; i++) {
				cin >> X;
				if (!cin)
				{
					cout << "bad input!" << endl;
					return 0;
				}
				Vec.push_back(X);
				cout << Vec[i] << endl;

			}
        GuessA = Vec.at(0);
		GuessB = Vec.at(1);
		GuessC = Vec.at(2);
		cout << GuessA << GuessB << GuessC << endl; 
		break;
    }

	// Declare variables used to compare player input to correct input.
	int GuessSum = GuessA + GuessB + GuessC; 
	int GuessProduct = GuessA * GuessB * GuessC;

	// Checks if user input is correct
	if(GuessSum == CodeSum && GuessProduct == CodeProduct) {
		cout << MessageF << endl;
	}
	else {
		cout << MessageG << endl;
	}

	return 0;
}



//To compile: cl TripleX.cpp
//To run: TripleX
// CTRL + C kills the program
/*

> TO launch vs code from terminal simply type in code.

> #include -preprocessor directive, <iostream> -headerfile

> S2.20 Expression statements - An expression followed by a ; 
	  Decleration statments - code that declares something like values.
	  Return statement - signles to the compiler that the program ends there. 
> Unreal engine has coding documentation structure guidelines like the 1st letter of each variable must be capitalized.
	and should start with an underscore or a letter and not use reserved keywords

> When renaming right click to change all occurances in vs code



*/