/*
	Title:  Driver.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  Add, cateorize, and display different types of candy
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
        
        cout << "Choose a number to navigate menu.\n\n";
        cout << "1.Add new Jar\n2.Choose Jar to add or remove candy\n3.Remove Jar\n4.Exit Store\n\n";
        cout << "Please enter your choice: ";
        cin >> menuChoice;

        //(!(cin >> menuChoice))
        

        while(menuChoice < 1 || menuChoice > 4) // validate user input
        {
            //clear error flag 
            cin.clear(); 
            //ignore rest of current input
            cin.ignore(); 

            //have user input another input 
            cout << "\n\nPlease enter a valid choice: ";
            cin >> menuChoice;
            cin.ignore(); 
        }

        switch(menuChoice) // switch to go through the menu
        {
            //adding new jar
            case 1:
                
                shop.addJar(); 
                break;

            //choose jar
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
    
    return 0;
}
