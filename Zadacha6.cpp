// Zadacha6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include < iostream>


int main()
{
	int n;
    int sum = 0;
	std::cout << "Enter your number between 10 and 99:" << ' ';
	std::cin >> n;
	
	if (n > 10 && n < 99)
	{
		for (int i = 10; i <= n; i++)
		{
			sum +=i;
		}
			std::cout << "The whole sum is: " << sum << std::endl;
	}
	else 
	{
		std::cout << "Wrong input data" << std::endl;
	}
    return 0;

}

