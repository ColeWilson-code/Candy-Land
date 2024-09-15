# Candy-Land
Program 1 assignment for CSC1310

## Program design
### Driver
Contains general user interface, with all classes used and all functions tested, and a way to end the program. 
### Classes
Storage and Data classes will store the data for the program and provide ways to access it.
### Functions
Main in Driver to run program
getInfo to get info from user
Add to add info to classes
Delete to remove info from classes
Print to show info to user
### Files
Driver.cpp; Storage, Data, and Other .cpp and .h, Makefile, TEST_CASE.txt, Save files 

## Outline of what the program will do 
Program will use functions to create a user interface, store info in classes, and access info from the classes to later be modified, deleted, or shown to user. 

## Classes that are needed
### Storage
Pointer to an array of pointers to the data with data stored in the data class.
Able to read items from a file and print contents to screen. 
### Data
Stores information about candy. Data is private but modifiable through function calls. Has at least one pointer. 
### Other
Top level or bottom level
e.g. median between driver and storage or sub-data in data class
