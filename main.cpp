#include <iostream>
#include "RecipeModel.hpp"


using namespace std;

int main(int argc, const char * argv[]) {
	RecipeService r1 = RecipeService(1, "Choclate frosting");
	RecipeService r2 = RecipeService(2, "Almond flavored chocolate frosting");
	RecipeService r3 = RecipeService(3, "Tarte with chocolate frosting");
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
		RecipeService *currentRecipe;

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
		cout << "For how many portion ?" << endl;
		float portion;
		cin>> portion;
		cout <<"Here is the list of the ingredients for " <<portion<<" portion." << endl; //define at recipe class, and make call to ingredairiant class.
		
		cout <<"Recipe for " << currentRecipe->getName() << endl;
		currentRecipe->makeRecipe()
		r1.makeRecipe(recipeId, portion);
		return 0;
		

	}
	while(true);

	return 0;
}
