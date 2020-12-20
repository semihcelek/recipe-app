#ifndef RecipeModel_hpp
#define RecipeModel_hpp

#include <cstdio>
#include <string>

using namespace std;

class RecipeModel 
{
private:
	int id;
	string name;
public:
	//constructor
	RecipeModel(int i, string k); 
	string getName();
	int getId();
};

class RecipeService : public RecipeModel
{
public:
	//constructor
	RecipeService(int i, string k);
	int makeRecipe(int id, float portion);
};

#endif 
