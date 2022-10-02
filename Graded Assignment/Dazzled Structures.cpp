#include <iostream>
using namespace std;

struct shopping_list{
	float price;
};
shopping_list water,sausage, freshyo;

float sum=0;
float totalprice=0;
int no;

int main(){
	water.price=850;
	sausage.price=700;
	freshyo.price=300;
	
	cout<<"How many packs of water do you want: ";
	cin>>no;
	totalprice= totalprice+ (no*water.price);
	
	cout<<"How many packs of sausages do you want: ";
	cin>>no;
	totalprice= totalprice+ (no*sausage.price);
	
	cout<<"How many bottles of freshyo do you want: ";
	cin>>no;
	totalprice= totalprice+ (no*freshyo.price);
	
	cout<<"The total price of your items is "<<totalprice<<" "<<endl; 
	
	return 0;

}
