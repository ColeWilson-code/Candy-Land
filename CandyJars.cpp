/*
	Title:  CandyJars.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  10/04/2024                
    Purpose: This file handles the contents of the jars with functions to 
				print, add, and remove candy. 
*/

#include "CandyJars.h"

/*********************************************************************** 
    Function Name: printCandy
    Fucntion Purpose: print a list of all candy in the candy vector 
************************************************************************/
void CandyJars::printCandy()
{

	if(candies.empty()){
        cout << "\nThere are currently no candies in this jar.\n\n";
    }else{
		cout << "Here is a list of the candies in the jar. \n";
		cout << "-------------------------------------------------------------\n";
		for(int i = 0; i < candies.size(); i++){
			cout << (i+1) << ": " << candies[i].getName() << "\n";
			cout << "\t\tFlavor: " << candies[i].getFlavor() << "\n";
			cout << "\t\tColor: " << candies[i].getColor() << "\n";
			cout << "\t\tQuantity: " << candies[i].getNumOfCandy() << "\n";
		}
		cout << "-------------------------------------------------------------\n";
	}
}

/*********************************************************************** 
    Function Name: addCandy
    Fucntion Purpose: This function gets user input, calls the candy constructor,
						and pushes the candy into the candy vector
************************************************************************/
void CandyJars::addCandy(){

	//vars used
	string candyName,candyFlavor, candyColor;
	int numCandy;

	//user input
	cout << "\nEnter the candy name: ";
    getline(cin, candyName); 
    cout << "Enter the candy flavor: ";
    getline(cin, candyFlavor);
    cout << "Enter the candy color: ";
    getline(cin, candyColor);
    cout << "Enter the candy quantity: ";

	//verify user input to make sure it is a number
	while(!(cin >> numCandy)){
            cout << "\nPlease enter a number: ";
            cin.clear();
            cin.ignore(100, '\n'); //CSC 1300 code I found
        }
	//candy constructor
	CandyType newCandy(candyFlavor,candyName,candyColor, numCandy);

	//add candies to vector
	candies.push_back(newCandy);
	cout << "Successfully added " << numCandy << " " << candyName << "\n\n";
}

/*********************************************************************** 
    Function Name: removeCandy
    Fucntion Purpose: This function gets user input for the specified
						candy to be removed, then removes that candy from 
						the candy vector using erase vector function.
************************************************************************/
void CandyJars::removeCandy(){
	int index;

	if(candies.empty()){
        cout << "\nThere is no candy to remove.\n\n";
		cout << "-------------------------------------------------------------\n";
    }else{
		cout << "Choose the candy you want to remove: ";

		//verify user input
		while(!(cin >> index) || index < 1 || index > candies.size()){
            //have user input another input 
            cout << "\nPlease enter the jar number you want: ";
            cin.clear();
            cin.ignore(100, '\n'); //CSC 1300 code I found
        }
		//decrement index to account for 0 indexing
		index--;
		cin.ignore();

		//vector function 'erase' uses an iterator
		candies.erase(candies.begin() + index);

		cout << "The candy at position " << index + 1 << " has been successfully removed.\n\n";
	}
}
