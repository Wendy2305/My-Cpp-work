#include <iostream>
using namespace std;
int main()

{
	cout<<"This is a program to display the multiplication table from 1 to n " <<endl;
	
	int n,x,i;
	cout<<"Enter your value for n: "<<endl;
	cin>>n;
	cout<<endl;
	cout<<"You have chosen your value of n to be "<<n<<endl;
	cout<<endl;

	
	for (x=1; x<13; x++){ //our first loop which loops from 1 to the value of n)
		for (i=1; i<=n; i++){ //our second loop which loops from 1 to 12//
			
			cout<<x<<" * "<<i<<" = "<<x*i<<'\t';
			/* That happens here is that the outer loop i selects a value, e.g 1
				This 1 then goes into the inner loop and multiplies all values from 1 to n
				Take note that after each multiplication the '\t' shifts the next value to the right by a few spaces.
				It then goes outside the inner loop and creates a new line.
				At the outer loop, the new line is created and it starts again.
				It begins i then becomes 2 and continues like that until it reaches 12. 
			*/
		
		}
		cout<<'\n';
	
	}
cout<<endl;
cout<<"Here is your multiplication table from 1 to "<< n <<endl;
cout<<"Thank you for your time"<<endl;	
	return 0;
}
