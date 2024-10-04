/*
	Title:  CandyType.h
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  10/04/2024                
    Purpose: This is the header file for CandyType and holds the class of 
                candyType
*/

#include "CandyLand.h"


#ifndef CANDY_TYPE_H
#define CANDY_TYPE_H

class CandyType
{
    private:
    string flavor, name, color;
    int numOfCandy;
    
    public:
    // getters
    string getFlavor(){return flavor;}
    string getName(){return name;}
    string getColor(){return color;}
    int getNumOfCandy(){return numOfCandy;}

    //setters
    void setFlavor(string f){flavor = f;}
    void setName(string n){name = n;}
    void setColor(string c){color = c;}
    void setNumOfCandy(int num){numOfCandy = num;}

    //constructor
    CandyType(string flavor, string name, string color, int numOfCandy) 
    {
        this->flavor = flavor;
        this->name = name;
        this->color = color;
        this->numOfCandy = numOfCandy; 
    }
};

#endif