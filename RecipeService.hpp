#ifndef RecipeService_hpp
#define RecipeService_hpp

#include "RecipeModel.hpp"
#include <cstdio>
#include <string>

class RecipeService: public RecipeModel {
public:
	 string getEvent();
	 string makeRecipe(int id, float portion);
};


#endif