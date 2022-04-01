#include <iostream>
using namespace std;

int main()
{
	cout<<"This is a program to solve simultaneous equations" <<endl;
	cout<<"Let us assume the first equation is in the form: ax + by = c" <<endl;
	cout<<"Let us assume the second equation is in the form: cx + ey = f" <<endl;

	
	float a,b,c,d,e,f,x,y,det;
	
	cout<< "Equation 1 :";
	cout<< "Enter your value for a: ";
	cin>> a;
	cout<< "Enter your value for b: ";
	cin>> b;
	cout<< "Enter your value for c: ";
	cin>> c;
	
	cout<< "Equation 2 :";
	cout<< "Enter your value for d: ";
	cin>> d;
	cout<< "Enter your value for e: ";
	cin>> e;
	cout<< "Enter your value for f: ";
	cin>> f;
	
	det = ((a*e)-(d*b));
	x = ((c*e)-(b*f))/det;
	y = ((a*f)-(c*d))/det;
	
	cout<<"Your value of x is : "<<x<< " and your value of y is : "<<y<< endl;
	
}