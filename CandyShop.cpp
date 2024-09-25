/*
	Title:  CandyShop.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  
*/

#include "CandyShop.h"


CandyJars* CandyShop::addJar(vector<CandyJars*> &vec, string type){ 
    
	//new jar
	CandyJars* Jars = new CandyJars;

    //enter information into class vars
    Jars->setType(type);

	vector<CandyType> candy;

	vec.push_back(Jars);
    return Jars; 
}

void CandyShop::printJar(vector<CandyJars*> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << i+1 << ": " << vec[i]->getType() << endl;
    }
    cout << endl;
}
