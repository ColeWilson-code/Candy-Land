/*
	Title:  CandyShop.h
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  contains a pointer to an array of pointers of Jars
*/
#include "CandyLand.h"
#include "CandyJars.h"


#ifndef CANDY_SHOP_H
#define CANDY_SHOP_H


class CandyShop
{
    private:
        
        // create vector of pointers
        vector<CandyJars*> vecOfJarPtrs;

        string name;
        int numJars; 
    public: 
        //setters
        void setName(string newName){name = newName;}
        void setNumJars(int initNum){numJars = initNum;}
     
        //getters
        string getName(){return name;}
        int getNumJars(){return numJars;}

        //other functioins
        void printJars();
        void addJar(string type);
        vector<CandyJars*>& getVec(){return vecOfJarPtrs;}
        void chooseJar();
        void printCandyLand();
};



#endif