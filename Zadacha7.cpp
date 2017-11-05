// Zadacha7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int n;
	std::cout << "Enter your number:" << ' ';
	std::cin >> n;
	while (n>=10 && n<=200)
	{
			int r;
			for (int i = n; i >=1; i--)
			{
				r = i % 7;
				if (r == 0)
				{
					std::cout << i << ' ';
				}
			}
		break;
	}
    
	return 0;
}

