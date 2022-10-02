#include <iostream>
using namespace std;
int main()

{
	cout<<"This is a program to display and add all odd numbers within a range " <<endl;

	int u; //variable for upper limit
	int l; //variable for lower limit
	int sum = 0;

Ultimate:	
	cout<<"Enter your value for the lower limit" <<endl;
	cin>> l;
	cout<< "Enter your value for the upper limit"<<endl;
	cin>>u;
	
	if(u>l){
	
	
		for (int i=l; i<=u; ++i){
			if (i%2==1){
			
				cout<<i<<",   "; 
				
			sum = sum + i;}
			}
		cout<<endl;	
		cout<<endl;	


		cout<<"The sum of all odd numbers within "<<l<<" and "<<u<<" is: "<< sum<<endl;
		}
	
	else{
	cout<<"Your upper limit value must be greater than the lower limit value"<<endl;
	cout<<"You have to select newS values"<<endl;
	goto Ultimate;}
	
return 0;
}
					

