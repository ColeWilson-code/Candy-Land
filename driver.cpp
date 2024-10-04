/*
	Title:  Driver.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  10/04/2024                
    Purpose:  This file provides the user with an interface to navigate the candy store.
                The user will continually come back to the main menu which utilizes a 
                switch statement and while loop
*/

#include "CandyShop.h"
#include "CandyJars.h"
#include "CandyType.h"

int main () 
{
    int menuChoice = 0;

    //50 is max jars in shop
    CandyShop shop(50); 
    
    shop.printCandyLand();
    do{
        shop.printJars();
        //print out the menu choices
        cout << "Choose a number to navigate menu.\n\n";
        cout << "1.Add new Jar\n2.Choose Jar to add or remove candy\n3.Remove Jar\n4.Exit Store\n\n";
        cout << "Please enter your choice: ";
        
        //input validation
        while(!(cin >> menuChoice) || (menuChoice < 1 || menuChoice > 4)){
            //have user input another input 
            cout << "\nPlease enter a valid choice: ";
            cin.clear();
            cin.ignore(100, '\n'); //CSC 1300 code I found
        }

        switch(menuChoice) // switch to go through the menu
        {
            //adding new jar
            case 1:
            
                shop.addJar(); 
                break;

            //choose a to edit jar
            case 2: 
                shop.printJars();
                shop.chooseJar(); 
                break;
            
            //remove jars
            case 3:
                shop.printJars();
                shop.removeJar();
                break;
        }

        //exit store for 4
    }while(menuChoice != 4);
    
    //deallocate memory
    shop.freeMemory();

    return 0;
}