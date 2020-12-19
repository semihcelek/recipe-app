#ifndef Recipe_hpp
#define Recipe_hpp

#include <stdio.h>
#include <string>
//#include <list>
using namespace std;

class Recipe {
private:
	int id;
	string name;
public:
	Recipe(int i, string k);
	//void printListofIngredients();
	string getName();
};

#endif 
