# Candy-Land
Program 1 assignment for CSC1310
Authors: Jack Bender, Cole Wilson, Cameron Bailey, Trigg Lampkins
Assigned: 9-11-24
Completed: 10-4-24

## Program design
### Driver
Contains general user interface, with all classes used and all functions tested, and a way to end the program. 
### Classes
CandyShop, CandyJars, and CandyType classes will store the data for the program and provide ways to access it.
### Functions
•	printJars - print a list of jars to the screen
•	addJar – add jar to store 
•	chooseJar – pick a jar in th store to show list of candies in jar
•	removeJar – delete the specified jar from the store
•	addCandy – add candies to a specifeid jar
•	removeCandy – remove a specified candy from a specified jar
•	Above are the main functions being used. Additional functions such as setters and getters within their respective classes are also being utilized.  
### Files
CandyLand.h, Driver.cpp, CandyShop.h, CandyJars.h, CandyType.h, CandyShop.cpp, CandyJars.cpp, CandyType.cpp, Makefile, TEST_CASE.txt

## Outline of what the program will do . 
•	Driver used for user interface
•	CandyShop stores the jar information privately (can hold multiple jars).
•	CandyJars stores the candy objects (can hold multiple candies).
•	CandyType stores the specified values of the candy.

## Classes that are needed
### CandyShop
Stores jar information privately. Contains an array to an array of pointers to the data
### CandyJars
Stores candy objects. 
### CandyType
Stores the values of the candy. 
