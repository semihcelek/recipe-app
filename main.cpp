#include <iostream>
#include "Recipe.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
	Recipe r1 = Recipe(0, "choclate-frosting");
	Recipe r2 = Recipe(1, "annen-frosting");
	Recipe r3 = Recipe(2, "Cake-with-icecream");
	//Ingredient s1 = Ingredient(0, 100, 300 ,500);
	//int recipeNumber;
	
	cout<<"Hello, we have 3 recipe:" <<endl;
		cout << "1- " + r1.getName() << endl;
		cout << "2- " + r2.getName() << endl;
		cout << "3- " + r3.getName() << endl;

	do 
	{
		cout<<"Please select your desired recipe?" << endl;
		int recipeId;
		cin >>recipeId;
		Recipe *currentRecipe;

		if( recipeId == 1)
        {
            currentRecipe = &r1;
        } else if (recipeId  == 2)
        {
            currentRecipe = &r2;
        } else if (recipeId == 3 )
        {
            currentRecipe = &r3;
        } else {
            cout<<"You're selected wrong recipe! - please try again!"<<endl;
            continue;
        }
		
		cout << "You have selected " + currentRecipe->getName() + "!!"<<endl;
		//currentRecipe->printListofIgredient(); //define at recipe class, and make call to ingredairiant class.
		cout << "For how many portion ?" << endl;
		//int portionNumber;
		//cin>> portionNumber;

	}
	while(true);

	return 0;
}
