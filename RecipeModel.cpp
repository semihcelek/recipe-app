#include "RecipeModel.hpp"
#include <iostream>

using namespace std;

RecipeModel::RecipeModel(int i, string k)
{
	id = i;
	name = k;
}
string RecipeModel::getName()
{
	return name;
}
int RecipeModel::getId()
{
	return id;
}

//void Recipe::printListofIngredients()
//{

//}