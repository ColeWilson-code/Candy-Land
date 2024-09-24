/*
	Title:  CandyJars.h
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  contains a pointer to an array of pointers of CandyType
*/

#include "CandyLand.h"
#include "CandyType.h"

#ifndef CANDYJARS_H
#define CANDYJARS_H

class CandyJars
{
private:
    CandyType ** candyPtr; 
    string type;  //generalFlavor example: "Sour" "Chocolate"
public:
    //getters 
    string getType(){return type;}
    
    //setters
    void setType(string kind);
};


#endif