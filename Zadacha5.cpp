// Zadacha5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{

		for (int i = 100; i < 999; i++)
		{
			int first, second, third;
			first = i % 10;
			second = (i / 10) % 10;
			third = i / 100;
			if (third != second && third != first && second != first)
			{
				std::cout << i << ' ';
			}
		}

		return 0;
	}


