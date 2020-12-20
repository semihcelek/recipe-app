#ifndef RecipeModel_hpp
#define RecipeModel_hpp

#include <cstdio>
#include <string>
//#include <list>
using namespace std;

class RecipeModel 
{
private:
	int id;
	string name;
public:
	RecipeModel(int i, string k);
	string getName();
};

class RecipeService : public RecipeModel
{
public:
	//constructor
	RecipeService(int i, string k);
	int makeRecipe(int id, float portion);
};

#endif 
