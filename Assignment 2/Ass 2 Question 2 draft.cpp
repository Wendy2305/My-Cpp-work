#include <iostream>
using namespace std;
int main()
{
	cout<<"This is a program to display the first n terms of a fibonacci series " <<endl;
	
	int n; 
	int u1 = 0;
	int u2 = 1;
	int nextterm = 0;
	
	cout <<"Enter your value for n"<<endl;
	cin >>n;
	
	for (int x=1; x<=n; ++x)
	{
	if (x==1) {
		cout<<u1<<",";
		continue; 
	}
	
	
	if (x==2)
	{
		cout<<u2<<",";
		continue; 
	}
	
	nextterm = u1 + u2;
	u1 = u2;
	u2 = nextterm;
	cout<<nextterm<<",";
    }
	return 0;
}
	
	
	
	
	
	
	
	