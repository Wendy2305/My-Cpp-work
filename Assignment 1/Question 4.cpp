// Question 4: The volume of a cube

#include <iostream>

using namespace std;
//const float PI = 3.142;
int main ()

{
	cout<<"This is a program to find the volume of a cube"<<endl;
	float rad;
	cout<<"Enter your value for length (in cm)" <<endl;
	cin>>rad;
	cout<<"You have chosen "<<rad<<"cm as your radius"  <<endl;
	float volume;
	volume = rad*rad*rad;
	cout<<"The volume of your cube is " <<volume<< "cubic metre" <<endl;
	cout<<"Thank you for your time!"<<endl;
	return 0;
	
}