/*
	Title:  CandyJars.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  
*/

#include "CandyJars.h"

void printCandy(int index, vector<CandyJars*> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[index].getCandy(i).getName();
	}
}

