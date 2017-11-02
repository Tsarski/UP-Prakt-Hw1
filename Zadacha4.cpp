// Zadacha4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int n;
	std::cout << "Enter your number:" << ' ';
	std::cin >> n;
	for (int i=1; i <= n; i++)
	{
		if (n%i == 0)
			std::cout << i << ' ';
	}
}

