#include <iostream>
using namespace std;

//char answer_collector[10];


int i,a;
char ans;
char answer_collector[10];


void rules(){
	cout<<"\t"<<" Rules of the game"<<endl;
	cout<<"\t"<<"-------------------------"<<endl;
	cout<<"You are expected to answer 10 question. \nYou can skip a question and return to it later. \nTo answer a question, enter the right option on the keyboard and Press Enter. \n";
	cout<<"To skip a question, press N. \nTo go back to a the previous question Press P. \nTo submit Press F. \n \n";	
}

/*char collector(char ans){
//	char ans;
//	char answer_collector[10];
	for(i=0; i<11; ++i){
	ans = answer_collector[i];}
	cout<<"The array is:"<<answer_collector[a]<<endl;
	return 0;
}
*/

void answers(){
	char ans;
	char answer_collector[10];
	int i;

	cout<<"Enter your Answer: ";
	cin>>ans;
	
	
	switch(ans){
		case 'A':
		case 'a':
			ans;
			//ans = answer_collector[i];
			//collector(ans);
			break;
			
		case 'B':
		case 'b':
			ans;
			//ans; = answer_collector[i];
			//collector(ans);
			break;
			
		case 'C':
		case 'c':
			ans;
			//ans;// = answer_collector[i];
			break;
			
		case 'D':
		case 'd':
			ans;
			//ans;// = answer_collector[i];
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
}
/*for(i=0; i<11; ++i){
			answer_collector[i] = ans;
			cout<<answer_collector[0];
			cout<<answer_collector[2];
			cout<<answer_collector[3];
			cout<<answer_collector[4];
			cout<<answer_collector[6];}
*/

void questions(){
		cout<<"Question 1"<<endl;
		cout<<"Which of the following is the correct identifier? \nA. $var_name\t B. VAR_123 \nC. varname@\t D. None of the Above"<<endl;
		answers();
//		for(i=0; i<11; ++i){
			answer_collector[0] = ans;
		cout<<endl;
		
		cout<<"Question 2"<<endl;
		cout<<"Which of the following is the address operator? \nA. @\t B. # \nC. &\t D. %"<<endl;
		answers();
	//	for(i=0; i<11; ++i){
			answer_collector[1] = ans;
		cout<<endl;
		
		cout<<"Question 3"<<endl;
		cout<<"Which of the following features must be supported by any programming language to become a pure object-oriented programming language? \nA. Encapsulation\t B. Inheritance \nC. Polymorphism\t D. All of the following"<<endl;
		answers();
		//for(i=0; i<11; ++i){
			answer_collector[2] = ans;
		cout<<endl;
		
		cout<<"Question 4"<<endl;
		cout<<"Which of the following refers to the characteristics of an array? \nA. An array is a set of similar data items\t B. An array is a set of distinct data types \nC. An array can hold different types of data types\t D. None of the above"<<endl;
		answers();
	//	for(i=0; i<11; ++i){
			answer_collector[3] = ans;
		cout<<endl;
		
		cout<<"Question 5"<<endl;
		cout<<"If we stored five elements or data items in an array, what will be the index address or the index number of the array's last data item? \nA. 2\t B. 3 \nC. 4\t D. 5"<<endl;
		answers();
	//	for(i=0; i<11; ++i){
			answer_collector[4] = ans;
		cout<<endl;
		
		cout<<"Question 6"<<endl;
		cout<<"Which of the following is the correct syntax for declaring the array? \nA. int array{};\t B. int array[5]; \nC. Array[5];\t D. None of the above"<<endl;
		answers();
		answer_collector[5] = ans;
		cout<<endl;
		
		cout<<"Question 7"<<endl;
		cout<<"Which of the following is the correct syntax for accessing the first element? \nA. array[2];\t B. array[0]; \nC. array[5];\t D. array[1];"<<endl;
		answers();
	//	for(i=0; i<11; ++i){
		answer_collector[6] = ans;
		cout<<endl;
		
		cout<<"Question 8"<<endl;
		cout<<"Which of the following give the 4th element of the array? \nA. array[2]\t B. array[3]; \nC. array[5];\t D. array[1];"<<endl;
		answers();
		//for(i=0; i<11; ++i){
		answer_collector[7] = ans;
		cout<<endl;
		
		cout<<"Question 9"<<endl;
		cout<<"Which type of memeory is used in an Array in C++ programming language? \nA. Contiguous\t B. None-contiguous \nC. Both A and B\t D. Not mentioned"<<endl;
		answers();
		//for(i=0; i<11; ++i){
		answer_collector[8] = ans;
		cout<<endl;
		
		cout<<"Question 10"<<endl;
		cout<<"Which of the following is the correct definition of the 'is_array();' function in C++? \nA. It checks that the specified variable is of the array or not\t B. It checks that the specified array of the single dimension or not \nC. It checks that the array specified of multi dimenson or not\t D. Both B and C"<<endl;
		answers();
		//for(i=0; i<11; ++i){
			answer_collector[9] = ans;
		cout<<endl;		
		
		for(int n=0; n<11; ++n){
			cout<<"My array has: "<<answer_collector[n]<<" ";
			cout<<endl;}
	}

int main(){
	cout<<"\t"<<" Welcome to C++ quiz game"<<endl;
	cout<<"\t"<<"-------------------------"<<endl;

Start_Again:	//Used this incase the user presses the wrong button.
	int start;
	cout<<"Press 1 to Start"<<endl;
	cout<<"Press 2 to Exit"<<endl;
	cin>>start;
	
	switch(start){
		case 1:
			cout<<"You have begun \n"<<endl;
			rules();
			questions();
			break;
			
		case 2:
			cout<<"You have chosen to exit the game"<<endl;
			break;
		
		default:
			cout<<"You entered an invalid number"<<endl;
			goto Start_Again;
}
//for(i=0; i<11; ++i)	{
//cout<<answer_collector[i]<<endl;}
	return 0;
}