/*
	Title:  Driver.cpp
	Author:  David Trigg Lampkins, Cole Wilson, Cameron Bailey, Jack Bender
	Date:  9/10/2024                
    Purpose:  
*/

#include <iostream>

using namespace std;

int main () {
    bool loop = true;
    int menuChoice = 0;
    while(loop == true)
    {
        cout << "1.Add new candy\n2.Delete candy\n3.Print candy\n4.Save candy\n5.Buy candy\n6.Exit Store\n";
        cout << "Please enter your choice: ";
        cin >> menuChoice;

        while(menuChoice < 6 || menuChoice > 1)
        {
            cout << "Please enter a valid choice: ";
            cin >> menuChoice;
        }

        if(menuChoice == 6)
        {
            loop = false;
        }

        switch(menuChoice)
        {
            
        }
    }
    return 0;
}