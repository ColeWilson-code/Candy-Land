/*
	Title:  CandyShop.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  10/02/2024                
    Purpose:  
*/

#include "CandyShop.h"


void CandyShop::addJar(){ 
    if(numJars == maxJars){
        cout << "You have reached max inventory! Must remove a jar to add one.\n";
    }else{
        string jarType;
        
        cout << "\nEnter the name of the jar you would like to add: ";
        cin.ignore();   //do not remove
        getline(cin, jarType);
        CandyJars* jar = new CandyJars;
        jar->setType(jarType);
        jarsPtr[numJars] = jar;
        numJars++;
    }
}

void CandyShop::printJars()
{
   if(numJars == 0){
        cout << "\nThere are currently no jars in the store. \n\n";
   }else{
        cout << "\nHere is a list of all jars in the store: \n";
        cout << "-------------------------------------------------------------\n";
        for (int i = 0; i < numJars; i++)
        {
            cout << (i+1) << ": " << jarsPtr[i]->getType() << endl;
        }
        cout << "-------------------------------------------------------------\n";
        cout << endl;
   }
}

void CandyShop::chooseJar(){

   if(numJars == 0){
        cout << "\nThere is no jar to choose. \n\n";
   }else{
        
        int jarNum;

        cout << "Enter the number of the jar you would like to choose: ";
        while(!(cin >> jarNum) || jarNum < 1 || jarNum > numJars){
            //have user input another input 
            cout << "\nPlease enter the jar number you want within the list: ";
            cin.clear();
            cin.ignore(100, '\n'); //CSC 1300 code I found
        } 

        CandyJars* currJar = jarsPtr[numJars - 1];
        cout << "You have picked " << currJar->getType() << ".\n";
        currJar->printCandy();

        cout << "Press 1 to add candy and 2 to remove candy: "; 
        int addOrRemInput;

        while(!(cin >> addOrRemInput) || addOrRemInput < 1 || addOrRemInput > 2){
            //have user input another input 
            cout << "\nPlease enter 1 or 2: ";
            cin.clear();
            cin.ignore(100, '\n'); //CSC 1300 code I found
        } 
        cin.ignore(100, '\n');

        if(addOrRemInput == 1){
            currJar->addCandy();
            currJar->printCandy();
        }else if(addOrRemInput == 2){
            currJar->removeCandy();
            currJar->printCandy();  
        }
   }

}

void CandyShop::removeJar(){
    if(numJars == 0){
        cout << "\nThere is no jar to remove. \n\n";
        cout << "-------------------------------------------------------------\n";
    }else{
        
        int jarNum;
        cout << "Enter the number of the jar you would like to remove: "; 

        while(!(cin >> jarNum) || jarNum < 1 || jarNum > numJars){
            //have user input another input 
            cout << "\nPlease enter the jar number you want: ";
            cin.clear();
            cin.ignore(100, '\n'); //CSC 1300 code I found
        } 

        int removeIndex = jarNum - 1;
        delete jarsPtr[removeIndex];
        for(int i = removeIndex; i < numJars - 1; i++){
            jarsPtr[i] = jarsPtr[i+1];
        }
        //delete jarsPtr[numJars - 1];
        numJars--;
    }
}

void CandyShop::freeMemory(){
    for(int i = i; i < numJars; i++){
        delete jarsPtr[i];
    }
    delete[] jarsPtr;
}


void CandyShop::printCandyLand(){

    cout <<"  ______     ___      .__   __.  _______   ____    ____     __          ___      .__   __.  _______ \n"; 
    cout <<" /      |   /   \\     |  \\ |  | |       \\  \\   \\  /   /    |  |        /   \\     |  \\ |  | |       \\ \n"; 
    cout <<"|  ,----'  /  ^  \\    |   \\|  | |  .--.  |  \\   \\/   /     |  |       /  ^  \\    |   \\|  | |  .--.  | \n";
    cout <<"|  |      /  /_\\  \\   |  . `  | |  |  |  |   \\_    _/      |  |      /  /_\\  \\   |  . `  | |  |  |  | \n";
    cout <<"|  `----./  _____  \\  |  |\\   | |  '--'  |     |  |        |  `----./  _____  \\  |  |\\   | |  '--'  | \n";
    cout <<" \\______/__/     \\__\\ |__| \\__| |_______/      |__|        |_______/__/     \\__\\ |__| \\__| |_______/  \n";
    cout <<"-----------------------------------------------------------------------------------------------------\n\n";
}
