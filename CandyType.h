/*
	Title:  CandyType.h
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  
*/

#include "CandyLand.h"


#ifndef CANDY_TYPE_H
#define CANDY_TYPE_H

class CandyType
{
    private:
    string flavor, name, color;

    public:
    // getters
    string getFlavor(){return flavor;}
    string getName(){return name;}
    string getColor(){return color;}

    //setters
    void setFlavor(string);
    void setName(string);
    void setColor(string);

    //constructor
    CandyType(string flavor, string name, string color){
        flavor = flavor;
        name = name; 
        color = color; 
    }
};

CandyType addCandy(string, string, string);

#endif