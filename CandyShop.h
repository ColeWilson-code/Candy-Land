/*
	Title:  CandyShop.h
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  10/02/2024                
    Purpose:  contains a pointer to an array of pointers of Jars
*/
#include "CandyLand.h"
#include "CandyJars.h"


#ifndef CANDY_SHOP_H
#define CANDY_SHOP_H


class CandyShop
{
    private:
        //pointer to an array of pointers
        CandyJars** jarsPtr;

        string name;
        int numJars;
        int maxJars; 
    public: 
        //constructor 
        CandyShop(int max){
            numJars = 0; 
            maxJars = max;
            jarsPtr = new CandyJars*[maxJars];
        } 
        
        //setters
        void setName(string newName){name = newName;}
        void setNumJars(int initNum){numJars = initNum;}
     
        //getters
        string getName(){return name;}
        int getNumJars(){return numJars;}
        CandyJars** getJarsPtr(){return jarsPtr;}

        //other functioins
        void printJars();
        void addJar();
        void chooseJar();
        void printCandyLand();
        void removeJar();
        void freeMemory();
};



#endif