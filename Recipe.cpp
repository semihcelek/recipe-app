#include "Recipe.hpp"
#include "Ingredients.cpp"
#include <iostream>

using namespace std;

Recipe::Recipe(int i, string k)
{
	id = i;
	name = k;
}
string Recipe::getName()
{
	return name;
}

//void Recipe::printListofIngredients()
//{

//}