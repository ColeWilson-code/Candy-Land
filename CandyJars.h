/*
	Title:  CandyJars.h
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  10/04/2024                
    Purpose:  This is the header file for CandyJars. It contains several function declarations
                and also contains a pointer.
*/

#include "CandyLand.h"
#include "CandyType.h"

#ifndef CANDYJARS_H
#define CANDYJARS_H

class CandyJars
{
private:
    vector<CandyType> candies; 
    string type;
    string *typePtr;  //generalFlavor example: "Sour" "Chocolate" ptr to type var
public:
    //constructor 
    CandyJars(){typePtr = &type;} 
    
    //getters 
    string getType(){return *typePtr;}
    CandyType getCandy(int i){return candies[i];}
    vector<CandyType> getCandyVec(){return candies;}
    
    //setters
    void setType(string kind){*typePtr = kind;}

    //other functions
    void printCandy();
    void addCandy();
    void removeCandy();
};

#endif