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
    string jarType;

    /*
    // create pointer to a vector storing shop pointers
    vector<CandyShop*> *ptrToShopPtrs;
    // create vector of pointers
    vector<CandyShop*> vecOfShopPtrs;
    //assign adress of vector to the pointer
    ptrToShopPtrs = &vecOfShopPtrs;
    */

    CandyShop shop; 
    
    cout << "\n\nWelcome to Candy Land!";
    do{
        cout << "What Would you like to do?\n";
        cout << "1.Add new Jar\n2.Choose Jar\n3.Edit Current Jars\n4.Exit Store\n";
        printJar(shop.getVec());
        cout << "Please enter your choice: ";
        cin >> menuChoice;

        while(menuChoice < 4 || menuChoice > 1) // validate user input
        {
            cout << "Please enter a valid choice: ";
            cin >> menuChoice;
        }

        switch(menuChoice) // switch to go through the menu
        {
            //adding new jar
            case 1:
            cout << "What is the name of the jar you would like to add: ";
            cin.ignore();
            getline(cin, jarType);
            shop.addJar(shop.getVec(), jarType);
            break;

            //choose jar
            case 2: 
            cout << "What jar would you like to choose?"; 
            printJar(shop.getVec());
            cin.ignore();
            getline(cin, jarType);
            
            
            break;
            
            //edit current jars
            case 3:
            cout << "Which jar would you like to edit?";
            printJar(shop.getVec());
            cin.ignore();
            getline(cin, jarType);
            
            break;
            
        }

        //exit store for 4
    }while(menuChoice != 4);
    
    return 0;
}