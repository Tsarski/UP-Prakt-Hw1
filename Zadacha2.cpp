// Zadacha2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int n, sum = 0, num = 0;
	double aver;

	do
	{
	
		std::cout << "Enter number:" << ' ';
		std::cin >> n;
		sum += n;
		num += 1;
		if (n < 1)
		{
			aver = (sum-n) / (num-1);
			std::cout << "The sum is:" << ' ' << sum-n << std::endl;
			std::cout << "The number of digits is:" << ' ' << num-1 << std::endl;
			std::cout << "The average is:" << ' ' << aver << std::endl;
		}
	} while (n >= 1 && n<=200);

return 0;
}

