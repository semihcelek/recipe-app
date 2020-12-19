#ifndef RecipeModel_hpp
#define RecipeModel_hpp

#include <cstdio>
#include <string>
//#include <list>
using namespace std;

class RecipeModel {
private:
	int id;
	string name;
public:
	RecipeModel(int i, string k);
	//void printListofIngredients();
	string getName();
};

#endif 
