#include "stdafx.h"
#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number: ";
	int inputNumber;
	std::cin >> inputNumber;
	return inputNumber;
}

void writeAnswer(int answer)
{
	std::cout << "The answer is: " << answer << std::endl;
}