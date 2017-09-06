// chap1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "io.h"

int main()
{
	int num1 = readNumber();	// gets the first number from the user
	int num2 = readNumber();	// gets the second number from the user

	int result = num1 + num2;	// calculates an output and stores it in 'result'

	writeAnswer(result);		// passes 'result' to the writing function

    return 0;
}

