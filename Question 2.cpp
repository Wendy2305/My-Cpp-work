// Question 4: To Convert Temperature in Kelvin to Farenheit

#include <iostream>

using namespace std;
//const float PI = 3.142;
int main ()

{
	cout<<"This is a program to convert temperature in kelvin to farenheit"<<endl;
	

	float k;
	cout<<"Enter your value for temperature (in Kelvin): " ;
	cin>> k;
	cout<<"You have chosen "<<k<<" as your temperature (in Kelvin)."  <<endl;
	
	float ans1;
	ans1 = k-273.15;
	
	float ans2;
	ans2 = ans1*9/5;
	
	float ans3;
	ans3 = ans2 + 32;
	
	cout <<k<< " degrees in kelvin has been converted to " <<ans3<< " degrees Farenheit" <<endl;
	cout<<"Thank you for your time!"<<endl;
	return 0;
	
}