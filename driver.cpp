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
    int jarNum; 
    CandyJars* currJar;

    CandyShop shop; 
    
    cout << "\n\nWelcome to Candy Land! \n\n";
    do{
        
        if(shop.getVec().empty()){
            cout << "There are currently no jars in the store. \n\n";
        }else{
            cout << "Here is a list of all jars in the store: \n"; 
            shop.printJar(shop.getVec());
        }

        cout << "What Would you like to do?\n\n";
        cout << "1.Add new Jar\n2.Choose Jar\n3.Edit Current Jars\n4.Exit Store\n\n";
        cout << "Please enter your choice: ";
        cin >> menuChoice;

        //(!(cin >> menuChoice))
        

        while((menuChoice < 1 || menuChoice > 4) || (!(cin >> menuChoice))) // validate user input
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
            cout << "What is the name of the jar you would like to add: ";
            cin.ignore();
            getline(cin, jarType);
            shop.addJar(shop.getVec(), jarType);

            //when hit max amount of jars
            //if(ARRAY_SIZE)
                //cout << "\n\nSorry! You have reached max inventory! Please remove a jar, or edit current ones.\n\n"; 

            break;

            //choose jar
            case 2: 
            cout << "What jar would you like to choose?"; 
            shop.printJar(shop.getVec());
            cin.ignore();
            cin >> jarNum;
            currJar = shop.getVec()[jarNum - 1];
            *currJar.printCandy(jarNum - 1, shop.getVec());
            
            //shop.chooseJar(shop.getVec(), jarNum - 1);
            
            
            break;
            
            //edit current jars
            case 3:
            cout << "Which jar would you like to edit?";
            shop.printJar(shop.getVec());
            cin.ignore();
            getline(cin, jarType);
            
            break;
        }

        //exit store for 4
    }while(menuChoice != 4);
    
    return 0;
}