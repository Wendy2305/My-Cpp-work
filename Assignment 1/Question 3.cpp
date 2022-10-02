// Question 4: The volume of a cylinder

#include <iostream>

using namespace std;
const float PI = 3.142;
int main ()

{
	cout<<"This is a program to find the volume of a cylinder"<<endl;
	
	float h;
	cout<<"Enter your value for height (in cm)" <<endl;
	cin>> h;
	cout<<"You have chosen "<<h<<"cm as your height" <<endl;
	
	float rad;
	cout<<"Enter your value for radius (in cm)" <<endl;
	cin>> rad;
	cout<<"You have chosen "<<rad<<"cm as your radius"  <<endl;
	
	float volume;
	volume = PI*rad*rad*h;
	cout<<"The volume of your cylinder is " <<volume<< "cubic metre" <<endl;
	cout<<"Thank you for your time!"<<endl;
	return 0;
	
}