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

In the project it can be seen that, base RecipeModel class has simple job, constructing the base functionality of classes and keeping plain variables of recipes. Furthermore, methods andadditional functionality of recipe class is implamented in RecipeService class.

Service class inherits the functionality of base recipe class and extends itself.
