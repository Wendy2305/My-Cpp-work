#include <iostream>
#include <cctype>
#include <unistd.h>


using namespace std;
char ans;
char submit;
char answer_collector[10];
int No_of_correct[10];
int sum;
char script; 
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
			sleep(1);
		
	
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
			sleep(1);
		
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
			sleep(1);
			
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
			sleep(1);
			
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
			sleep(1);
			
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
			sleep(1);
			
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
			sleep(1);
			
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
			sleep(1);
			
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
			sleep(1);
			
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
			sleep(1);
	}
	
}

void submission(){
	
Submit_Again:
	cout<<"Confirm your submission by pressing F: ";
	cin>>submit;
	cout<<"Processing results..."<<endl;
	cout<<endl;
	
	if(toupper(submit)=='F'){
		if (answer_collector[0] == correct_answer[0]){
			No_of_correct[0]= 1;}
		else{
			No_of_correct[0]= 0;}
			
		if (answer_collector[1] == correct_answer[1]){
			No_of_correct[1]= 1;}
		else{
			No_of_correct[1]= 0;}
			
			
		if (answer_collector[2] == correct_answer[2]){
			No_of_correct[2]= 1;}
		else{
			No_of_correct[2]= 0;}
			
		if (answer_collector[3] == correct_answer[3]){
			No_of_correct[3]= 1;}
		else{
			No_of_correct[3]= 0;}
			
		if (answer_collector[4] == correct_answer[4]){
			No_of_correct[4]= 1;}
		else{
			No_of_correct[4]= 0;}
			
		if (answer_collector[5] == correct_answer[5]){
			No_of_correct[5]= 1;}
		else{
			No_of_correct[5]= 0;}
			
		if (answer_collector[6] == correct_answer[6]){
			No_of_correct[6]= 1;}
		else{
			No_of_correct[6]= 0;}
			
		if (answer_collector[7] == correct_answer[7]){
			No_of_correct[7]= 1;}
		else{
			No_of_correct[7]= 0;}
			
		if (answer_collector[8] == correct_answer[8]){
			No_of_correct[8]= 1;}
		else{
			No_of_correct[8]= 0;}
			
		if (answer_collector[9] == correct_answer[9]){
			No_of_correct[9]= 1;}
		else{
			No_of_correct[9]= 0;}
			
			
			
		for (int i = 0; i < 10; i++){
    		sum += No_of_correct[i];}
			cout<<"You scored "<<sum<<" out of 10 \n"<<endl;}
		
	else{
		cout<<"You entered the wrong letter. Try again"<<endl;
		goto Submit_Again;}
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
	
	void Questions(){
	Q1:
		cout<<"Question 1"<<endl;
		cout<<"Which of the following is the correct identifier? \nA. $var_name\t B. VAR_123 \nC. varname@\t D. None of the Above"<<endl;
		answers();
		answer_collector[0]= toupper(ans);
		if ((ans=='n')||(ans=='N')){
			goto Q2;} 
		if ((ans=='p')||(ans=='P')){
			cout<<"YOU CANNOT GO BACK BEYOND THIS POINT"<<endl;
			cout<<"Previous question"<<endl;
			cout<<"Your  previous answer for Question 1: "<<answer_collector[0]<<endl;
			goto Q1;}  
		cout<<endl;
			
	Q2:
		cout<<"Question 2"<<endl;
		cout<<"Which of the following is the address operator? \nA. @\t B. # \nC. &\t D. %"<<endl;
		answers();
		answer_collector[1]= toupper(ans);
		if ((ans=='n')||(ans=='N')){
			goto Q3;} 
		if ((ans=='p')||(ans=='P')){
			cout<<"Previous question"<<endl;
			cout<<"Your  previous answer for Question 1: "<<answer_collector[0]<<endl;
			goto Q1;}  
		cout<<endl;	
		
	Q3:
		cout<<"Question 3"<<endl;
		cout<<"Which of the following features must be supported by any programming language to become a pure object-oriented programming language? \nA. Encapsulation\t B. Inheritance \nC. Polymorphism\t D. All of the following"<<endl;
		answers();
		answer_collector[2]= toupper(ans);
		if ((ans=='n')||(ans=='N')){
			goto Q4;} 
		if ((ans=='p')||(ans=='P')){
			cout<<"Previous question"<<endl;
			cout<<"Your  previous answer for Question 2: "<<answer_collector[1]<<endl;
			goto Q2;}  
		cout<<endl;	
		
	Q4:
		cout<<"Question 4"<<endl;
		cout<<"Which of the following refers to the characteristics of an array? \nA. An array is a set of similar data items\t B. An array is a set of distinct data types \nC. An array can hold different types of data types\t D. None of the above"<<endl;
		answers();
		answer_collector[3] = toupper(ans);
		if ((ans=='n')||(ans=='N')){
			goto Q5;} 
		if ((ans=='p')||(ans=='P')){
			cout<<"Previous question"<<endl;
			cout<<"Your  previous answer for Question 3: "<<answer_collector[2]<<endl;
			goto Q3;}  
		cout<<endl;
		
	Q5:
		cout<<"Question 5"<<endl;
		cout<<"If we stored five elements or data items in an array, what will be the index address or the index number of the array's last data item? \nA. 2\t B. 3 \nC. 4\t D. 5"<<endl;
		answers();
		answer_collector[4] = toupper(ans);
		if ((ans=='n')||(ans=='N')){
			goto Q6;} 
		if ((ans=='p')||(ans=='P')){
			cout<<"Previous question"<<endl;
			cout<<"Your  previous answer for Question 4: "<<answer_collector[3]<<endl;
			goto Q4;}  
		cout<<endl;
	
	Q6:
		cout<<"Question 6"<<endl;
		cout<<"Which of the following is the correct syntax for declaring the array? \nA. int array{};\t B. int array[5]; \nC. Array[5];\t D. None of the above"<<endl;
		answers();
		answer_collector[5] = toupper(ans);
		if ((ans=='n')||(ans=='N')){
			goto Q7;} 
		if ((ans=='p')||(ans=='P')){
			cout<<"Previous question"<<endl;
			cout<<"Your  previous answer for Question 5: "<<answer_collector[4]<<endl;
			goto Q5;}  
		cout<<endl;
	
	Q7:
		cout<<"Question 7"<<endl;
		cout<<"Which of the following is the correct syntax for accessing the first element? \nA. array[2];\t B. array[0]; \nC. array[5];\t D. array[1];"<<endl;
		answers();
		answer_collector[6] = toupper(ans);
		if ((ans=='n')||(ans=='N')){
			goto Q8;} 
		if ((ans=='p')||(ans=='P')){
			cout<<"Previous question"<<endl;
			cout<<"Your  previous answer for Question 6: "<<answer_collector[5]<<endl;
			goto Q6;}  
		cout<<endl;
	
	Q8:
		cout<<"Question 8"<<endl;
		cout<<"Which of the following give the 4th element of the array? \nA. array[2]\t B. array[3]; \nC. array[5];\t D. array[1];"<<endl;
		answers();
		answer_collector[7] = toupper(ans);
		if ((ans=='n')||(ans=='N')){
			goto Q9;} 
		if ((ans=='p')||(ans=='P')){
			cout<<"Previous question"<<endl;
			cout<<"Your  previous answer for Question 7: "<<answer_collector[6]<<endl;
			goto Q7;}  
		cout<<endl;
	
	Q9:
		cout<<"Question 9"<<endl;
		cout<<"Which type of memeory is used in an Array in C++ programming language? \nA. Contiguous\t B. None-contiguous \nC. Both A and B\t D. Not mentioned"<<endl;
		answers();
		answer_collector[8] = toupper(ans);
		if ((ans=='n')||(ans=='N')){
			goto Q10;} 
		if ((ans=='p')||(ans=='P')){
			cout<<"Previous question"<<endl;
			cout<<"Your  previous answer for Question 8: "<<answer_collector[7]<<endl;
			goto Q8;}  
	
		cout<<endl;
	
	Q10:
		cout<<"Question 10"<<endl;
		cout<<"Which of the following is the correct definition of the 'is_array();' function in C++? \nA. It checks that the specified variable is of the array or not\t B. It checks that the specified array of the single dimension or not \nC. It checks that the array specified of multi dimenson or not\t D. Both B and C"<<endl;
		answers();
		answer_collector[9] = toupper(ans);
		if ((ans=='p')||(ans=='P')){
			cout<<"Previous question"<<endl;
			cout<<"Your  previous answer for Question 9: "<<answer_collector[8]<<endl;
			goto Q9;}  
		cout<<endl;
		
		cout<<"You have reached the end of the test. Press F to submit"<<endl;
		cout<<"You have answered the last question. If you wish to go back, press P. If you wish to submit, press F"<<endl;
		cin>>submit;
		cout<<"Enter your Answer: ";
		if ((submit=='p')||(submit=='P')){
			cout<<"Previous question"<<endl;
			cout<<"Your  previous answer for Question 10: "<<answer_collector[9]<<endl;
			goto Q10;}
		else{
			submission();
			script_generator();}
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
		rules();
		Questions();
		cout<<endl;
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
