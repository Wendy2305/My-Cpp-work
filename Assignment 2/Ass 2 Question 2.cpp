#include <iostream>
using namespace std;
int main()
{
	cout<<"This is a program to display the first n terms of a fibonacci series " <<endl;
	
	int firstt = 0;
	int secondt = 1;
	int n,i,nextterm;
	
	cout<<"Enter your value for n"<<endl;
	cin>>n;
	cout<<"You have chosen to display "<<n<<" terms of the fibonacci sequence"<<endl;
	cout<<endl;
	
	for (int i=1; i<=n; ++i){
		if (i==1){ //This if condition generates the first term
			cout<<firstt<<"  ";
			continue;
		}
		
		if (i==2)
		{//This if condition generates the second  term
			cout<<secondt<<" ";
			continue; 
		}
		
		//This code generates the next terms from 3 to n. 
		nextterm = firstt + secondt;
		firstt = secondt;
		secondt = nextterm;
		cout<<" "<<nextterm<<" ";
		}
return 0;		
	}
