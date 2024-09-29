/*
	Title:  CandyShop.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  
*/

#include "CandyShop.h"


void CandyShop::addJar(string type){ 
    
    //when hit max amount of jars
                //if(ARRAY_SIZE)
                    //cout << "\n\nSorry! You have reached max inventory! Please remove a jar, or edit current ones.\n\n";

	//new jar
	CandyJars* Jar = new CandyJars;

    //enter information into class vars
    Jar->setType(type);

	vector<CandyType> candy;

    vecOfJarPtrs.push_back(Jar);
    //return Jar; 
}

void CandyShop::printJars()
{
    if(vecOfJarPtrs.empty()){
        cout << "\nThere are currently no jars in the store. \n\n";
    }else{
        cout << "\nHere is a list of all jars in the store: \n";
        cout << "-------------------------------------------------------------\n";
        for (int i = 0; i < vecOfJarPtrs.size(); i++)
        {
            cout << i+1 << ": " << vecOfJarPtrs[i]->getType() << endl;
        }
        cout << "-------------------------------------------------------------\n";
        cout << endl;
    }
 
}

void CandyShop::chooseJar(){
    CandyJars* currJar;
    int jarNum;
                
    cout << "Enter jar you would like to choose: "; 
    cin >> jarNum;
    cin.ignore();
    currJar = vecOfJarPtrs[jarNum - 1];
    cout << "You have picked " << currJar->getType() << ".\n";
    currJar->printCandy();
    cout << "Press 1 to add candy and 2 to remove candy: "; 
    int addOrRemInput;
    cin >> addOrRemInput;
    cin.ignore();
            
    if(addOrRemInput == 1){
        currJar->addCandy();
        currJar->printCandy();
    }else if(addOrRemInput == 2){
        currJar->removeCandy();
        currJar->printCandy();  
    }   
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
