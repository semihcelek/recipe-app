### Cmpe210 Recipe Application Project

#### In order to build the program, you can run build.sh on shell or build on terminal.

```bash
g++ main.cpp RecipeModel.hpp RecipeModel.cpp RecipeService.cpp -o recipe.o
```
### Or you can build with clang:
```bash
clang++ main.cpp RecipeModel.hpp RecipeModel.cpp RecipeService.cpp 
```


#### Recipe Application:

Recipe is a commandline program that gives a user dessert recipes. It has written in C++ and implements object-oriented programming princibles.

Recipe application has one main class naming RecipeModel and it uses class inheritance to extend its functionality. The main purpose of this class implementation is to simplify workflow of the main class.

In the project it can be seen that, base RecipeModel class has simple job, constructing the base functionality of classes and keeping plain variables of recipes and having  getters and setters. Furthermore, methods andadditional functionality of recipe class is implamented in RecipeService class.

Service class extends the functionality of base recipe class, as its name implies, Service class's purpose it to handle services for Recipe class.

### Here is execution example:
```bash
Welcome to the recipe book, we have 3 recipe:
1- Choclate frosting
2- Almond flavored chocolate frosting
3- Tarte with chocolate frosting
Please select your desired recipe?
3  
You have selected Tarte with chocolate frosting!!
For how many portion ?
0.2
Here is the list of the ingredients for 0.2 portion.
Recipe for Tarte with chocolate frosting
1- 1 eggs.
2- 30 grams of flour.
3- 20 grams of butter.
4- 10 grams of almond flour.
5- 0.4 portions of almond flavored chocolate frosting.
Would yo want to look other recipe? Y/N
N
Bye bye then!
```
