// Zadacha1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int n;

	std::cout << "Enter the amount of numbers you want to calculate:" << ' ';
	std::cin >> n;
	
	int t;
	int sum = 0;
	while (n>0) 
	{
		std::cout << "Enter your number: ";
		std::cin >> t;
		if (t < 10 || t>5555) 
		{
			std::cout << "Your number is not in the interval, enter a new one" << std::endl;
			continue;
		}
		sum = sum + t;
		n--;
		
   }
	std::cout << "The sum of your numbers is:"<<' '<< sum <<std::endl;
    return 0;
}

