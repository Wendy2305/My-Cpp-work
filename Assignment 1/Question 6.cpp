// Question 4: To Convert Minutes to Hours and Minutes

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	cout<<"This is a program to convert minutes to hours and minutes" <<endl;
	
	int min;
	cout<<"Enter your value for time (in minutes): " ;
	cin>> min;
	cout<<"You have chosen "<<min<<" as your time (in minutes)."  <<endl;
	
	int time1;
	time1 = min/60;
//	cout<<time1<<endl;
	
	int time2;
	time2 = min % 60;
//	cout<<time2<< endl;
	
	if (time2 < 10)
		cout << "Your time in hours and minutes is = " <<time1<< ":" <<"0"<<time2<< endl;

	else
	 cout<<"Your time in hours and minutes is ="<<time1<<":"<<time2<< endl;
	return 0;
	
}