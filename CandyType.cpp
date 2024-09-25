/*
	Title:  CandyType.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  
*/

#include "CandyType.h"

/*
	Function: addCandy 
	Purpose: creates a constructor 
*/
CandyType addCandy(string flavor, string color, string name)
{
	CandyType candy(flavor, name, color); 
	return candy;
}



