//#include "RecipeService.hpp"
#include "RecipeModel.hpp"
#include "iostream"

using namespace std;

RecipeService::RecipeService(int i, string k) : RecipeModel(i, k){
	
}



int RecipeService::makeRecipe(int id, float portion) {
		if(id ==1) {
			cout <<"1- " << 200*portion <<" grams of dark chocolate." << endl;
			cout <<"2- " << 25*portion <<" grams of butter." << endl;
			cout <<"3- " << 100*portion <<" grams of icing sugar." << endl;
		} else if(id==2) {
			cout <<"1- " << 2*portion <<" grams of almond extract." << endl;
			cout <<"2- " << 1*portion <<" portions of chocolate frosting." << endl;

		} else if(id==3) {
			cout <<"1- " << 5*portion <<" eggs." << endl;
			cout <<"2- " << 150*portion <<" grams of flour." << endl;
			cout <<"3- " << 100*portion <<" grams of butter." << endl;
			cout <<"4- " << 50*portion <<" grams of almond flour." << endl;
			cout <<"5- " << 2*portion <<" portions of almond flavored chocolate frosting." << endl;
		} else {
			return 0;
		}
		return 0;     
	} 
