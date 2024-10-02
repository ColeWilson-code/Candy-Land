/*
	Title:  CandyJars.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  10/02/2024                
    Purpose:  
*/

#include "CandyJars.h"

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
    cin >> numCandy;
	while (cin.fail())
	{
		cout << "Please enter a valid number\n";
		cout << "Enter the candy quantity: ";
    	cin >> numCandy;
	}
	
    cin.ignore();

	//candy constructor
	CandyType newCandy(candyFlavor,candyName,candyColor, numCandy);

	//add candies to vector
	candies.push_back(newCandy);
	cout << "Successfully added " << numCandy << " " << candyName << "\n\n";
}

void CandyJars::removeCandy(){
	int index;

	if(candies.empty()){
        cout << "\nThere is no candy to remove.\n\n";
		cout << "-------------------------------------------------------------\n";
    }else{
		cout << "Choose the candy you want to remove: ";

		cin >> index;
		index--;
		cin.ignore();

		candies.erase(candies.begin() + index);

		cout << "The candy at position " << index << " has been successfully removed.\n\n";
	}
}
