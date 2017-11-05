// Zadacha3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int n, count = 0;
	std::cout << "Enter number:" << ' ';
	std::cin >> n;
	if (n > 0) 
	{
		for (; n != 0; count++) 
		{
			n = n / 10;
        }
		
		std::cout << "Number of digits:" << ' ' << count << std::endl;
	}
	else
	{
		std::cout << "Enter natural number" << std::endl;
	}

    return 0;
}

