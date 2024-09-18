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
    string generalFlavor, generalName, generalColor;

    public:
    // getters
    string getGeneralFlavor(){return generalFlavor;}
    string getGeneralName(){return generalName;}
    string getGeneralColor(){return generalColor;}

    //setters
    void generalFlavor();
    void generalName();
    void generalColor();
};
#endif