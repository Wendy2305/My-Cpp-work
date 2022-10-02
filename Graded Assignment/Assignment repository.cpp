#include <iostream>
#include <cctype>
using namespace std;
char ans;
char submit;
char answer_collector[10];
int No_of_correct[10];
int sum;
char script; 
//char correct_answer[10]={'B','C', 'D', 'A', 'C', 'B', 'B', 'B', 'A','A'};
char correct_answer[10]={'B','C', 'D', 'A', 'C', 'B', 'B', 'B', 'A','A'};
char i,x, y;


void rules(){
	cout<<"\t"<<" Rules of the game"<<endl;
	cout<<"\t"<<"-------------------------"<<endl;
	cout<<"You are expected to answer 10 question. \nYou can skip a question and return to it later. \nTo answer a question, enter the right option on the keyboard and Press Enter. \n";
	cout<<"To skip a question, press N. \nTo go back to a the previous question Press P. \nTo submit Press F. \n \n";	}
	
void script_generator(){
	cout<<"If you wish to see your script, Press V: ";
	cin>>script;
	cout<<endl;
	
	if(toupper(script)=='V'){
		cout<<"Question 1"<<endl;
		cout<<"Which of the following is the correct identifier? \nA. $var_name\t B. VAR_123 \nC. varname@\t D. None of the Above"<<endl;
		cout<<"Correct Option: "<<correct_answer[0]<<"\t";
		cout<<"Your Choice: "<<answer_collector[0]<<"\t \t";
		if (answer_collector[0] == correct_answer[0]){
			cout<<"Correct! \n"<<endl;
			No_of_correct[0]= 1;}
		else{
			cout<<"Wrong! \n"<<endl;
			No_of_correct[0]= 0;}
		
	
		cout<<"Question 2"<<endl;
		cout<<"Which of the following is the address operator? \nA. @\t B. # \nC. &\t D. %"<<endl;
		cout<<"Correct Option: "<<correct_answer[1]<<"\t";
		cout<<"Your Choice: "<<answer_collector[1]<<"\t \t";
		if (answer_collector[1] == correct_answer[1]){
			cout<<"Correct! \n"<<endl;
			No_of_correct[1]= 1;}
		else{
			cout<<"Wrong! \n"<<endl;
			No_of_correct[1]= 0;}
		
		cout<<"Question 3"<<endl;
		cout<<"Which of the following features must be supported by any programming language to become a pure object-oriented programming language? \nA. Encapsulation\t B. Inheritance \nC. Polymorphism\t D. All of the following"<<endl;
		cout<<"Correct Option: "<<correct_answer[2]<<"\t";
		cout<<"Your Choice: "<<answer_collector[2]<<"\t \t";
		if (answer_collector[2] == correct_answer[2]){
			cout<<"Correct! \n"<<endl;
			No_of_correct[2]= 1;}
		else{
			cout<<"Wrong! \n"<<endl;
			No_of_correct[2]= 0;}
			
		cout<<"Question 4"<<endl;
		cout<<"Which of the following refers to the characteristics of an array? \nA. An array is a set of similar data items\t B. An array is a set of distinct data types \nC. An array can hold different types of data types\t D. None of the above"<<endl;
		cout<<"Correct Option: "<<correct_answer[3]<<"\t";
		cout<<"Your Choice: "<<answer_collector[3]<<"\t \t";
		if (answer_collector[3] == correct_answer[3]){
			cout<<"Correct! \n"<<endl;
			No_of_correct[3]= 1;}
		else{
			cout<<"Wrong! \n"<<endl;
			No_of_correct[3]= 0;}
			
		cout<<"Question 5"<<endl;
		cout<<"If we stored five elements or data items in an array, what will be the index address or the index number of the array's last data item? \nA. 2\t B. 3 \nC. 4\t D. 5"<<endl;
		cout<<"Correct Option: "<<correct_answer[4]<<"\t";
		cout<<"Your Choice: "<<answer_collector[4]<<"\t \t";
		if (answer_collector[4] == correct_answer[4]){
			cout<<"Correct! \n"<<endl;
			No_of_correct[4]= 1;}
		else{
			cout<<"Wrong! \n"<<endl;
			No_of_correct[4]= 0;}
			
		cout<<"Question 6"<<endl;
		cout<<"Which of the following is the correct syntax for declaring the array? \nA. int array{};\t B. int array[5]; \nC. Array[5];\t D. None of the above"<<endl;
		cout<<"Correct Option: "<<correct_answer[5]<<"\t";
		cout<<"Your Choice: "<<answer_collector[5]<<"\t \t";
		if (answer_collector[5] == correct_answer[5]){
			cout<<"Correct! \n"<<endl;
			No_of_correct[5]= 1;}
		else{
			cout<<"Wrong! \n"<<endl;
			No_of_correct[5]= 0;}
			
		cout<<"Question 7"<<endl;
		cout<<"Which of the following is the correct syntax for accessing the first element? \nA. array[2];\t B. array[0]; \nC. array[5];\t D. array[1];"<<endl;
		cout<<"Correct Option: "<<correct_answer[6]<<"\t";
		cout<<"Your Choice: "<<answer_collector[6]<<"\t \t";
		if (answer_collector[6] == correct_answer[6]){
			cout<<"Correct! \n"<<endl;
			No_of_correct[6]= 1;}
		else{
			cout<<"Wrong! \n"<<endl;
			No_of_correct[6]= 0;}
			
		cout<<"Question 8"<<endl;
		cout<<"Which of the following give the 4th element of the array? \nA. array[2]\t B. array[3]; \nC. array[5];\t D. array[1];"<<endl;
		cout<<"Correct Option: "<<correct_answer[7]<<"\t";
		cout<<"Your Choice: "<<answer_collector[7]<<"\t \t";
		if (answer_collector[7] == correct_answer[7]){
			cout<<"Correct! \n"<<endl;
			No_of_correct[7]= 1;}
		else{
			cout<<"Wrong! \n"<<endl;
			No_of_correct[7]= 0;}
			
		cout<<"Question 9"<<endl;
		cout<<"Which type of memeory is used in an Array in C++ programming language? \nA. Contiguous\t B. None-contiguous \nC. Both A and B\t D. Not mentioned"<<endl;
		cout<<"Correct Option: "<<correct_answer[8]<<"\t";
		cout<<"Your Choice: "<<answer_collector[8]<<"\t \t";
		if (answer_collector[8] == correct_answer[8]){
			cout<<"Correct! \n"<<endl;
			No_of_correct[8]= 1;}
		else{
			cout<<"Wrong! \n"<<endl;
			No_of_correct[8]= 0;}
			
		cout<<"Question 10"<<endl;
		cout<<"Which of the following is the correct definition of the 'is_array();' function in C++? \nA. It checks that the specified variable is of the array or not\t B. It checks that the specified array of the single dimension or not \nC. It checks that the array specified of multi dimenson or not\t D. Both B and C"<<endl;
		cout<<"Correct Option: "<<correct_answer[9]<<"\t";
		cout<<"Your Choice: "<<answer_collector[9]<<"\t \t";
		if (answer_collector[9] == correct_answer[9]){
			cout<<"Correct! \n"<<endl;
			No_of_correct[9]= 1;}
		else{
			cout<<"Wrong! \n"<<endl;
			No_of_correct[9]= 0;}
	}
	
}

void submission(){
	
Submit_Again:
	cout<<"Enter your Answer: ";
	cin>>submit;
	cout<<"Processing results..."<<endl;
	cout<<endl;
	
	if(toupper(submit)=='F'){
		if (answer_collector[0] == correct_answer[0]){
			//cout<<"Correct"<<endl;
			No_of_correct[0]= 1;}
		else{
		//	cout<<"Wrong"<<endl;
			No_of_correct[0]= 0;}
			
		if (answer_collector[1] == correct_answer[1]){
		//	cout<<"Correct"<<endl;
			No_of_correct[1]= 1;}
		else{
			//cout<<"Wrong"<<endl;
			No_of_correct[1]= 0;}
			
			
		if (answer_collector[2] == correct_answer[2]){
		//	cout<<"Correct"<<endl;
			No_of_correct[2]= 1;}
		else{
		//	cout<<"Wrong"<<endl;
			No_of_correct[2]= 0;}
			
		if (answer_collector[3] == correct_answer[3]){
		//	cout<<"Correct"<<endl;
			No_of_correct[3]= 1;}
		else{
		//	cout<<"Wrong"<<endl;
			No_of_correct[3]= 0;}
			
		if (answer_collector[4] == correct_answer[4]){
		//	cout<<"Correct"<<endl;
			No_of_correct[4]= 1;}
		else{
		//	cout<<"Wrong"<<endl;
			No_of_correct[4]= 0;}
			
		if (answer_collector[5] == correct_answer[5]){
		//	cout<<"Correct"<<endl;
			No_of_correct[5]= 1;}
		else{
		//	cout<<"Wrong"<<endl;
			No_of_correct[5]= 0;}
			
		if (answer_collector[6] == correct_answer[6]){
		//	cout<<"Correct"<<endl;
			No_of_correct[6]= 1;}
		else{
		//	cout<<"Wrong"<<endl;
			No_of_correct[6]= 0;}
			
		if (answer_collector[7] == correct_answer[7]){
		//	cout<<"Correct"<<endl;
			No_of_correct[7]= 1;}
		else{
		//	cout<<"Wrong"<<endl;
			No_of_correct[7]= 0;}
			
		if (answer_collector[8] == correct_answer[8]){
		//	cout<<"Correct"<<endl;
			No_of_correct[8]= 1;}
		else{
		//	cout<<"Wrong"<<endl;
			No_of_correct[8]= 0;}
			
		if (answer_collector[9] == correct_answer[9]){
		//	cout<<"Correct"<<endl;
			No_of_correct[9]= 1;}
		else{
		//	cout<<"Wrong"<<endl;
			No_of_correct[9]= 0;}
			
		
		
		
		
			
		for (int i = 0; i < 10; i++){
    		sum += No_of_correct[i];}
			cout<<"You scored "<<sum<<" out of 10"<<endl;
		}
		
	else{
		cout<<"You entered the wrong letter. Try again"<<endl;
		goto Submit_Again;
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
			submission();
			break;
			
		case 'V':
		case 'v':
			script_generator();
			break;
		
		default:
			cout<<"You entered an invalid letter"<<endl;
		}
	
}
	
	
/*	void Nexter1(){Q2();}
	void Nexter2(){Q3();}
	void Nexter3(){Q4();}
*/	
	
	void Q1(){
		cout<<"Question 1"<<endl;
		cout<<"Which of the following is the correct identifier? \nA. $var_name\t B. VAR_123 \nC. varname@\t D. None of the Above"<<endl;
		answers();
		answer_collector[0]= toupper(ans);
		//if ((ans=='n')||(ans=='N')){
		//	goto second_question;} 
		if ((ans=='p')||(ans=='P')){
			cout<<"YOU CANNOT GO BACK BEYOND THIS POINT"<<endl;
			Q1();}  
		cout<<endl;}
		
	 
	
	void Q2(){
second_question:
		cout<<"Question 2"<<endl;
		cout<<"Which of the following is the address operator? \nA. @\t B. # \nC. &\t D. %"<<endl;
		answers();
		answer_collector[1]= toupper(ans);
		//if ((ans=='n')||(ans=='N')){
		//	Nexter2();} 
		if ((ans=='p')||(ans=='P')){
			Q1();}  
		cout<<endl;}	
		
	void Q3(){
		cout<<"Question 3"<<endl;
		cout<<"Which of the following features must be supported by any programming language to become a pure object-oriented programming language? \nA. Encapsulation\t B. Inheritance \nC. Polymorphism\t D. All of the following"<<endl;
		answers();
		answer_collector[2]= toupper(ans);
		//if ((ans=='n')||(ans=='N')){
		//	Nexter3();} 
		if ((ans=='p')||(ans=='P')){
			Q2();}  
		cout<<endl;	}
		
	void Q4(){
		cout<<"Question 4"<<endl;
		cout<<"Which of the following refers to the characteristics of an array? \nA. An array is a set of similar data items\t B. An array is a set of distinct data types \nC. An array can hold different types of data types\t D. None of the above"<<endl;
		answers();
		answer_collector[3] = toupper(ans);
		if ((ans=='p')||(ans=='P')){
			Q3();}  
		cout<<endl;}
		
		
	void Q5(){
		cout<<"Question 5"<<endl;
		cout<<"If we stored five elements or data items in an array, what will be the index address or the index number of the array's last data item? \nA. 2\t B. 3 \nC. 4\t D. 5"<<endl;
		answers();
		answer_collector[4] = toupper(ans);
		if ((ans=='p')||(ans=='P')){
			Q4();}  
		cout<<endl;}
	
	
	void Q6(){
		cout<<"Question 6"<<endl;
		cout<<"Which of the following is the correct syntax for declaring the array? \nA. int array{};\t B. int array[5]; \nC. Array[5];\t D. None of the above"<<endl;
		answers();
		answer_collector[5] = toupper(ans);
		if ((ans=='p')||(ans=='P')){
			Q5();}  
		cout<<endl;}
	
	void Q7(){
		cout<<"Question 7"<<endl;
		cout<<"Which of the following is the correct syntax for accessing the first element? \nA. array[2];\t B. array[0]; \nC. array[5];\t D. array[1];"<<endl;
		answers();
		answer_collector[6] = toupper(ans);
		if ((ans=='p')||(ans=='P')){
			Q6();}  
		cout<<endl;}
	
	
	void Q8(){
		cout<<"Question 8"<<endl;
		cout<<"Which of the following give the 4th element of the array? \nA. array[2]\t B. array[3]; \nC. array[5];\t D. array[1];"<<endl;
		answers();
		answer_collector[7] = toupper(ans);
		if ((ans=='p')||(ans=='P')){
			Q7();}  
		cout<<endl;}
	
	void Q9(){
		cout<<"Question 9"<<endl;
		cout<<"Which type of memeory is used in an Array in C++ programming language? \nA. Contiguous\t B. None-contiguous \nC. Both A and B\t D. Not mentioned"<<endl;
		answers();
		answer_collector[8] = toupper(ans);
		if ((ans=='p')||(ans=='P')){
			Q8();}  
		cout<<endl;}
	
	void Q10(){
		cout<<"Question 10"<<endl;
		cout<<"Which of the following is the correct definition of the 'is_array();' function in C++? \nA. It checks that the specified variable is of the array or not\t B. It checks that the specified array of the single dimension or not \nC. It checks that the array specified of multi dimenson or not\t D. Both B and C"<<endl;
		answers();
		answer_collector[9] = toupper(ans);
		if ((ans=='p')||(ans=='P')){
			Q9();}  
		cout<<endl;}
	
		
	
	
	
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
		Q1();
		Q2();
		Q3();
		Q4();
		Q5();
		Q6();
		Q7();
		Q8();
		Q9();
		Q10();
		cout<<endl;
		cout<<"You have reached the end of the test. Press F to submit"<<endl;
		submission();
		script_generator();
	//	for(int i=0; i<10; ++i){
	//		cout<<"Ans"<<i+1<<": "<<answer_collector[i]<<endl;}
		}
		
	else if(start==2){
		cout<<"You have chosen to exit the game"<<endl;}
		
	else if((start!=0)&&(start!=2)){
		cout<<"You have chosen an invalid letter"<<endl;
		cout<<"You MUST select 1 or 2"<<endl;
		cout<<endl;
		goto Start_Again;}
	return 0;
}