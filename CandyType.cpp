/*
	Title:  CandyType.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  10/02/2024                
    Purpose:  
*/

#include "CandyType.h"

/*
	Function: addCandy 
	Purpose: creates an object of candy 
*/
CandyType addCandy(string flavor, string color, string name, int numAdded)
{
	CandyType candy(flavor, name, color, numAdded); 
	return candy;
}



