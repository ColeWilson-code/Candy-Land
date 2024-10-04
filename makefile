
output: driver.o CandyShop.o CandyJars.o CandyType.o 
	g++ driver.o CandyShop.o CandyJars.o CandyType.o -o output

driver.o: driver.cpp
	g++ -c driver.cpp

CandyShop.o: CandyShop.cpp
	g++ -c CandyShop.cpp

CandyJars.o: CandyJars.cpp
	g++ -c CandyJars.cpp

CandyType.o: CandyType.cpp
	g++ -c CandyType.cpp

clean: 
	rm *.o output