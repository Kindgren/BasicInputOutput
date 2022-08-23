// BasicInAndOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.

// THIS IS MY VERY FIRST C++ PROGRAM

#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main()
{
	string input{};


	//One integer
	cout << "Enter one integer: ";
	getline(cin, input);
	int number = stoi(input);
	cout << "You entered the number: " << number << "\n" << endl;


	//Four integers
	int number2{}, number3{}, number4{};
	cout << "Enter four integers: ";
	cin >> number;
	cin >> number2;
	cin >> number3;
	cin >> number4;
	cout << "You entered the numbers: " << number << " " << number2 << " " << number3 << " " << number4 << "\n" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	
	//One integer and one real number
	double real{};
	cout << "Enter one integer and one real number: ";
	cin >> number;
	cin >> real;
	cout << setprecision(3) << fixed << "The real is:      " << real << endl;
	cout << "The integer is:    " << number << "\n" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//One real number and one integer
	cout << "Enter one real number and one integer: ";
	cin >> real;
	cin >> number;
	cout << setprecision(3) << fixed << "The real is:......" << real << endl;
	cout << "The integer is:...." << number << "\n" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//One character
	char c{};
	cout << "Enter a character: ";
	cin >> input;
	c = input.at(0);
	cout << "You entered: " << c << "\n\n";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//One string
	cout << "Enter a word: ";
	cin >> input;
	cout << "The word '" << input << "' has " << input.length() << " character(s)\n" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//One integer and one word
	cout << "Enter an integer and a word: ";
	cin >> number;
	cin >> input;

	cout << "You entered '" << number << "' and '" << input << "'\n" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//One character and one word
	cout << "Enter a character and a word: ";
	cin >> c;
	cin >> input;
	cout << "You entered the string \"" << input << "\" and the character '" << c << "'\n" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//One word and one real number
	cout << "Enter a word and a real number: ";
	getline(cin, input, ' ');
	cin >> real;
	cout << "You entered \"" << input << "\" and \"" << fixed << setprecision(3) << real << "\"\n" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//One text
	cout << "Enter a text-Line: ";
	getline(cin, input);
	cout << "You entered: \"" << input << "\"\n" << endl;

	//One text2
	cout << "Enter a second line of text: ";
	getline(cin, input);
	cout << "You entered: \"" << input << "\"\n" << endl;

	//three words
	string input2{};
	string input3{};
	cout << "Enter three words: ";
	cin >> input;
	cin >> input2;
	cin >> input3;
	cout << "You entered '" << input << " " << input2 << " " << input3 << "'";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');


	return 0;
}

