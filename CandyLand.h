/*
	Title:  CandyLand.h
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  Add, cateorize, and display different types of candy
*/

//so we do not have to type it so much
#include <iostream>
using namespace std;

//include the class header files
#include "CandyJars.h"
#include "CandyType.h"
#include "CandyShop.h"

//function prototypes so we can call them as needed
//these are general so change as needed
void printCandy();
void printJar();
string addCandy(string);
string addJar();
void deleteCandy(string);
void deleteJar(string);

