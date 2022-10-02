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
			if (i%2==1) //This ensures that all the numbers we want are ODD
			{
				cout<<i<<",   "; //This helps print out all the ODD numbers we want
				
			sum = sum + i;}//This is for finding the sum at the end
			}
		cout<<endl;	
		cout<<endl;	


		cout<<"The sum of all odd numbers within "<<l<<" and "<<u<<" is: "<< sum<<endl;
		}
	
	else //We put this else statement just in case the user puts an upper limit that is less than the lower limit
	{
	cout<<"Your upper limit value must be greater than the lower limit value"<<endl;
	cout<<"You have to select new values"<<endl;
	goto Ultimate; //we use Goto statement so the user can now re-type appropriate values.
	}
	
return 0;
}
					

