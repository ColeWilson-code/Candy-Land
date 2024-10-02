/*
	Title:  CandyJars.h
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  10/02/2024                
    Purpose:  contains a pointer to an array of pointers of CandyType
*/

#include "CandyLand.h"
#include "CandyType.h"

#ifndef CANDYJARS_H
#define CANDYJARS_H

class CandyJars
{
private:
    vector<CandyType> candies; 
    string type;  //generalFlavor example: "Sour" "Chocolate"
public:
    //getters 
    string getType(){return type;}
    CandyType getCandy(int i){return candies[i];}
    vector<CandyType> getCandyVec(){return candies;}
    
    //setters
    void setType(string kind){type = kind;}

    //other functions
    void printCandy();
    void addCandy();
    void removeCandy();
};


#endif