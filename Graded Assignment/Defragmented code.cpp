include <iostream>
#include <cctype>
#include <unistd.h>

using namespace std;
char ans;
char submit;
int sum;
char script; 
int i,w;

char answer_collector[10];
int No_of_correct[10];
char correct_answer[10]={'B','C', 'D', 'A', 'C', 'B', 'B', 'B', 'A','A'};

char Questions_text[10][1000]={"Which of the following is the correct identifier?",
"Which of the following is the address operator?",
"Which of the following features must be supported by any programming language to become a pure object-oriented programming language?",
"Which of the following refers to the characteristics of an array?",
"If we stored five elements or data items in an array, what will be the index address or the index number of the array's last data item?", 
"Which of the following is the correct syntax for declaring the array?",
"Which of the following is the correct syntax for accessing the first element?",
"Which of the following give the 4th element of the array?",
"Which type of memeory is used in an Array in C++ programming language?",
"Which of the following is the correct definition of the 'is_array();' function in C++?",
 };


char Questions_option[10][1000]={"A. $var_name\t B. VAR_123 \nC. varname@\t D. None of the Above \n",
"A. @\t B. # \nC. &\t D. % \n",
"A. Encapsulation\t B. Inheritance \nC. Polymorphism\t D. All of the following \n",
"A. An array is a set of similar data items\t B. An array is a set of distinct data types \nC. An array can hold different types of data types\t D. None of the above \n",
"A. 2\t B. 3 \nC. 4\t D. 5 \n",
"A. int array{};\t B. int array[5]; \nC. Array[5];\t D. None of the above \n",
"A. array[2];\t B. array[0]; \nC. array[5];\t D. array[1]; \n",
"A. array[2]\t B. array[3]; \nC. array[5];\t D. array[1]; \n",
"A. Contiguous\t B. None-contiguous \nC. Both A and B\t D. Not mentioned \n" ,
"A. It checks that the specified variable is of the array or not\t B. It checks that the specified array of the single dimension or not \nC. It checks that the array specified of multi dimenson or not\t D. Both B and C \n",
};

void script_generator(){
	cout<<"If you wish to see your script, Press V: ";
	cin>>script;
	cout<<endl;
	
		if(toupper(script)=='V'){
			for(int i=0; i<10; ++i){
				cout<<"Question "<<i+1<<endl;
				cout<< Questions_text[i]<<endl;
				cout<< Questions_option[i]<<endl;
				cout<<"Correct Option: "<<correct_answer[i]<<"\t";
				cout<<"Your Choice: "<<answer_collector[i]<<"\t \t";
				if (answer_collector[i] == correct_answer[i]){
					cout<<"Correct! \n"<<endl;
					No_of_correct[i]= 1;}
				else{
					cout<<"Wrong! \n"<<endl;
					No_of_correct[i]= 0;}
				sleep(1);
		}
	}	
}				
				
void answers(){
	int i;
	cout<<"Enter your Answer: ";
	cin>>ans;
	cout<<endl;
		
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
		//	submission();
			break;
			
		case 'V':
		case 'v':
			script_generator();
			break;
		
		default:
			cout<<"You entered an invalid letter"<<endl;}
}

void submission(){	
Submit_Again:
	cout<<"Press F to confirm submission"<<endl;
	cout<<"Enter your Answer: ";
	cin>>submit;
	cout<<"Processing results..."<<endl;
	cout<<endl;
	
if(toupper(submit)=='F'){
	for(int i=0;  i<10; ++i){
		if (answer_collector[i] == correct_answer[i]){
			No_of_correct[i]= 1;
			}
		else{
			No_of_correct[i]= 0;}
	}
			
	for (int i = 0; i < 10; i++){
    		sum += No_of_correct[i];}
    	
			cout<<"You scored "<<sum<<" out of 10 \n"<<endl; }
else if(toupper(submit)=='P'){
	cout<<"Question "<<10<<endl;
		cout<< Questions_text[9]<<endl;
		cout<< Questions_option[9]<<endl;
		answers();
		answer_collector[9]= toupper(ans);
		goto Submit_Again;}

}


int main(){	
	cout<<"\t"<<" Welcome to C++ quiz game"<<endl;
	cout<<"\t"<<"-------------------------"<<endl;

Start_Again:	//Used this incase the user presses the wrong button.
	int start;
	cout<<"Press 1 to Start"<<endl;
	cout<<"Press 2 to Exit"<<endl;
	cin>>start;
	
	if(start==1){
		cout<<"You have begun \n"<<endl;
		cout<<"\t"<<" Rules of the game"<<endl;
	cout<<"\t"<<"-------------------------"<<endl;
	cout<<"You are expected to answer 10 question. \nYou can skip a question and return to it later. \nTo answer a question, enter the right option on the keyboard and Press Enter. \n";
	cout<<"To skip a question, press N. \nTo go back to a the previous question Press P. \nTo submit Press F. \n \n";
	
	for(int i=0; i<10; ++i){
	previous_checkpoint:
		cout<<"Question "<<i+1<<endl;
		cout<< Questions_text[i]<<endl;
		cout<< Questions_option[i]<<endl;
		answers();
		answer_collector[i]= toupper(ans);
		if ((ans=='n')||(ans=='N')){
			i=i+1;} 
		if ((ans=='p')||(ans=='P')){
			cout<<"Your  previous answer for Question "<<i<<" : "<<answer_collector[i-1]<<endl;
			i=i-1;
			goto previous_checkpoint;} 
		if ((ans=='f')||(ans=='F')){
			break;}}
		cout<<endl;
		cout<<"You have reached the end of the test. Press F to submit"<<endl;
		submission();
		script_generator();}
			
		
	else if(start==2){
		cout<<"You have chosen to exit the game"<<endl;}
		
	else if((start!=0)&&(start!=2)){
		cout<<"You have chosen an invalid number"<<endl;
		cout<<"You MUST select 1 or 2"<<endl;
		cout<<endl;
		goto Start_Again;}
	return 0;
	}	



