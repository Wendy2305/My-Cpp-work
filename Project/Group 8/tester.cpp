#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <unistd.h>

using namespace std;

	char arr_username[3][10] = {"joe", "moses", "sarah" };
	char arr_password[3][10] = {"pass", "csc201", "cows"};
	char username[100];
	char password[100];
	char option;
	int i;
	
int main(){
	
	ofstream myfile("security.txt");
	if (myfile.is_open()){
		myfile<<"Username \t Password"<<endl;
		for (i=0; i<3; ++i){
			//This prints out our usernames and passwords in our "Security" file
			myfile<<arr_username[i]<<"\t \t";
			myfile<<arr_password[i]<<"\n";
		}
		//We close the file so it does not disrupt anything
		myfile.close();
		}
		else {
			cout<<"Unable to open file";}
		
	login:
		cout << "Enter username: ";
		cin >> username;

		cout << "Enter Password: ";
		cin >> password;
		cout << "\n";
	
	for (i=0; i<3; ++i){
		if((strcmp(arr_username[i],username)==0) and(strcmp(arr_password[i],password)==0)){ //comparing to see if our the entered username and password match the ones in our security file
		 	cout<<"Welcome: "<<arr_username[i]<<endl;}
	}	
							
/*	newfile.open("database.txt",ios::in);
								if(newfile.is_open()) {
						    		while(!newfile.eof()) {
						    			getline(newfile, matnoarr[i]);
						        		for (int i=1;i<41;++i){  
						        			//getline(newfile, matnoarr[i]);
						        			if ((offset = matnoarr[i].find(search, 0)) != string::npos) {
						            			cout << "Student Identified! "<<endl;
						            			cout << "First name: " << fnamearr[i] << endl;
						            			cout << "Last name: " << lnamearr[i] << endl;
						            			cout << "Matric no: " << matnoarr[i] << endl;
						            		}
*/			
			return 0;
		}
	