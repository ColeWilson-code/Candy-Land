/*
	Title:  Driver.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  Add, cateorize, and display different types of candy
*/

#include "CandyLand.h"


int main () 
{
    int menuChoice = 0;
    string jarName, ;
    
    cout << "Welcome to Candy Land!"
    do{
        cout << "What Would you like to do?\n";
        cout << "1.Add new Jar\n2.Choose Jar\n3.Edit Current Jars\n4.Exit Store\n";
        printJar();
        cout << "Please enter your choice: ";
        cin >> menuChoice;

        while(menuChoice < 4 || menuChoice > 1) // validate user input
        {
            cout << "Please enter a valid choice: ";
            cin >> menuChoice;

        }

        switch(menuChoice) // switch to go through the menu
        {
            //add new jar
            case 1:
            cout << "What is the name of the jar you would like to add: ";
            cin.ignore();
            getline(cin, jarName);
            addJar(jarName);
            break;

            //choose jar
            case 2: 
            cout << "What jar would you like to choose?"; 
            printJar();
            cin.ignore();
            getline(cin, jarName);
                      
            
            break;
            
            //edit current jars
            case 3:
            cout << "Which jar would you like to edit?";
            printJar();
            cin.ignore();
            getline(cin, jarName);
            
            break;
            
        }

        //exit store for 4
    }while(menuChoice != 4);
    
    return 0;
}