#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;

// Determines whether a number is even or odd
bool isEven(const unsigned int &number)
{
	return (number % 2 == 0) ? 1 : 0;
}

int main(int argc, char *argv[])
{
	string input_file;

	// Check first argument if it exists for input file, otherwise ask user
	if (argc > 1)
	{
		input_file = argv[1];
	}
	else
	{
		cout << "Please enter the path to your input file: " << endl;
		cin >> input_file;
	}

	// Open input file and check if successfully opened
	ifstream ifs(input_file);
	if (!ifs)
	{
		cout << "Failed to open input file." << endl;
		return 1;
	}

	int number = 0;

	// Get a number from file
	while (ifs >> number)
	{
		cout << isEven(number) << endl;
	}

	return 0;
}