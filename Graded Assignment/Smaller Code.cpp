#include <iostream>
using namespace std;
char ans;


void rules(){
	cout<<"\t"<<" Rules of the game"<<endl;
	cout<<"\t"<<"-------------------------"<<endl;
	cout<<"You are expected to answer 10 question. \nYou can skip a question and return to it later. \nTo answer a question, enter the right option on the keyboard and Press Enter. \n";
	cout<<"To skip a question, press N. \nTo go back to a the previous question Press P. \nTo submit Press F. \n \n";	}


void answers(){
	int i;
		
	switch(ans){
			
		case 'A':
		case 'a':
			break;
			
		case 'B':
		case 'b':
			
			break;
			
		case 'C':
		case 'c':
			break;
			
		case 'D':
		case 'd':
			break;
			
		case 'N':
		case 'n':
			break;
			
		case 'P':
		case 'p':
			break;
			
		case 'F':
		case 'f':
			break;
		
		default:
			cout<<"You entered an invalid letter"<<endl;
		}
		cout<<"Enter your Answer: ";
		cin>>ans;
		
}

void questions(){
	char answer_collector[10];
	
		cout<<"Question 1"<<endl;
		cout<<"Which of the following is the correct identifier? \nA. $var_name\t B. VAR_123 \nC. varname@\t D. None of the Above"<<endl;
		answers();
		answer_collector[0]=ans;
		cout<<endl;
		
		cout<<"Question 2"<<endl;
		cout<<"Which of the following is the address operator? \nA. @\t B. # \nC. &\t D. %"<<endl;
		answers();
		answer_collector[1]=ans;
		cout<<endl;
		
		cout<<"Question 3"<<endl;
		cout<<"Which of the following features must be supported by any programming language to become a pure object-oriented programming language? \nA. Encapsulation\t B. Inheritance \nC. Polymorphism\t D. All of the following"<<endl;
		answers();
		answer_collector[2]=ans;
		cout<<endl;	
		
		for(int i=0; i<3; ++i){
			cout<<"Ans"<<i<<": "<<answer_collector[i]<<endl;
		}
	}

	
	
int main(){
//char answer_collector[10];
//char ans;
	cout<<"\t"<<" Welcome to C++ quiz game"<<endl;
	cout<<"\t"<<"-------------------------"<<endl;

Start_Again:	//Used this incase the user presses the wrong button.
	int start;
	cout<<"Press 1 to Start"<<endl;
	cout<<"Press 2 to Exit"<<endl;
	cin>>start;
	
	if(start==1){
		cout<<"You have begun \n"<<endl;
		rules();
		questions();
		int a;

		}
		
	else if(start==2){
		cout<<"You have chosen to exit the game"<<endl;}
		
	else if((start!=0)&&(start!=2)){
		cout<<"You have chosen an invalid letter"<<endl;
		cout<<"You MUST select 1 or 2"<<endl;
		cout<<endl;
		goto Start_Again;}
	
}