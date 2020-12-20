#!/bin/bash
	echo "Building the Recipe app"
		g++ main.cpp RecipeModel.hpp RecipeModel.cpp RecipeService.cpp -o recipe.o
	## clang++ could be used insted of g++.
