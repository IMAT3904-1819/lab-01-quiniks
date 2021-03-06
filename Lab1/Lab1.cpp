// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Random.h"
#include <sstream>
#include <string>

int main()
{
	Random* l_RandomGen = Random::instance();
	std::string l_sInput = "";
	int l_iGuess = 0;
	std::stringstream ss;

	int l_RandomNum =  l_RandomGen->getRandInt(1, 100);

	std::cout << "I have chosen a random number between 1 and 100, inclusive, can you guess it?\n";
	
	while (true) {
		ss.str("");
		ss.clear();
		std::getline(std::cin, l_sInput);
		ss << l_sInput;
		if (ss >> l_iGuess) {
			if (l_iGuess >= 0 && l_iGuess <= 100) {
				break;
			}
		}
		std::cout << "invalid input. Try again.\n";
	}


	std::cout << "Your guess: " << l_iGuess << "\n";

	system("PAUSE");
    return 0;
}