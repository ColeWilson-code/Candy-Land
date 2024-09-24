/*
	Title:  CandyShop.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  
*/

#include "CandyShop.h"


CandyJars* addJar(vector<CandyJars*> vec, string type){ 
    
	//new jar
	CandyJars* Jars = new CandyJars;

    //enter information into class vars
    Jars->setType(type);


	/*
    // CREATING A POINTER TO A VECTOR OF JARS PTRS
    // create pointer to a vector storing Jars pointers
    vector<CandyJars*> *ptrToJarsPtrs;
    // create vector of pointers
    vector<CandyJars*> vecOfJarPtrs;
    //assign adress of vector to the pointer
    ptrToJarsPtrs = &vecOfJarPtrs;
	*/

	vector<CandyType> candy;

	vec.push_back(Jars);
    return Jars; 
}

void printJar(vector<CandyJars*> vec)
{
    for (int i = 0; i < vec.size()-1; i++)
    {
        cout << i+1 << ": " << vec[i]->getType() << endl;
    }
}


