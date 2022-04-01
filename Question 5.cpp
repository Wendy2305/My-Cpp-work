// Question 4: The volume of a sphere

#include <iostream>

using namespace std;
const float PI = 3.142;
int main ()

{
	cout<<"This is a program to find the volume of a sphere"<<endl;
	
	
	float rad;
	cout<<"Enter your value for radius (in cm)" <<endl;
	cin>> rad;
	cout<<"You have chosen "<<rad<<"cm as your radius"  <<endl;
	
	float ans;
	ans = PI*rad*rad*4/3;
	cout<<"The volume of your sphere is " <<ans<< "cubic metre" <<endl;
	cout<<"Thank you for your time!"<<endl;
	return 0;
	
}