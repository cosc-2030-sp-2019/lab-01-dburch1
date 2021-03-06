// Lab01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
#include <fstream>
using std::ofstream;
using std::ifstream;
#include <string>
using std::string;


int main(int argc, char* argv[])
{
	string fromFile, first, penUlt, last;
	int count = 0;

	// Check for correct # of args
	if (argc != 2) {
		cout << "\nWrong # of arguments.\n";
		return EXIT_FAILURE;
	}

	ifstream file(argv[1]);

	// Check for opened file
	if (!file) {
		cout << "\nFile could not be opened.\n";
		return EXIT_FAILURE;
	}

	bool flag = true;
	while (flag) {
		file >> fromFile;
		if (count == 0) {
			first = fromFile;
		}
		if (!file.eof()) {
			penUlt = last;
			last = fromFile;
			count++;
		}
		else {
			flag = 0;
		}
	}

	file.close();


	cout << "\nNumber of words is: " << count << "\n";
	cout << "\nFirst: " << first;
	cout << "\npenUlt: " << penUlt;
	cout << "\nLast: " << last;

	cout << "\n";
	//system("pause");
    return 0;
}

