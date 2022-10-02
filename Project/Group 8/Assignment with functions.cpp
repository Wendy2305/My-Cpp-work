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
	fstream newfile, savefile;
	string fname, lname, matno, csc201, csc205, mth201, mth205, gst201, gpa;
  	string line, search, update, save;
  	string file, ext;
	char filename;
  	string fnamearr[41], lnamearr[41], matnoarr[41], csc201arr[41], csc205arr[41], mth201arr[41], mth205arr[41], gst201arr[41], gpaarr[41];
  	string unamearr[4], pwordarr[4];
  	string uname, pword;
	int j;
	

	void menu();
		
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
		newfile.open("database.txt",ios::in); // what this does is to put each word from our file into arrays. So I created arrays for everything; csc201, mth201, firstname, last name e.t.c
				if (newfile.is_open()){    //opening the file 'database'
					int i=0;
					    while(!newfile.eof()) {
						getline(newfile, fname, ' ');
					    fnamearr[i]=  fname;
					    getline(newfile, lname,'	');
					    lnamearr[i]=  lname;
					    getline(newfile, matno, '	');
					    matnoarr[i] = matno;
					    getline(newfile, csc201, '	');
					    csc201arr[i]= csc201;
					    getline(newfile, csc205, '	');
					    csc205arr[i]= csc205;
					    getline(newfile,mth201 , '	');
					    mth201arr[i]= mth201;
					    getline(newfile, mth205, '	');
					    mth205arr[i]= mth205;
					    getline(newfile, gst201, '	');
					    gst201arr[i]= gst201;
					    getline(newfile, gpa);
					    gpaarr[i]=gpa;
					          
						i++;}
						newfile.close();} //close the file object.	
				else{
					cout<<"Unable to read 'security' file"<<endl;	}
				
					
			newfile.open("security.txt",ios::in);
				if (newfile.is_open()){    //opening the file 'database'
					   int i=0;
					   		while(!newfile.eof()) {
					   		getline(newfile, uname, '	');
					        unamearr[i]=uname;
					        getline(newfile, pword);
					        pwordarr[i]=pword;
					        
					    ++i;
					}
						for (int i=0;i<4;++i){  
								        cout << unamearr[i]<<"\t";
								        cout << pwordarr[i]<<"\n";}
					    newfile.close();}
				else{
					cout<<"Unable to read 'security' file"<<endl;
				}
			
				login:
				cout << "Enter username: ";
				cin >> username;
		
				cout << "Enter Password: ";
				cin >> password;
				cout << "\n";
			
			
			for(i=0; i<4; ++i){	
				if ((username==unamearr[i]) and (password==pwordarr[i])){
					menu();
						}
				}
					
					return 0;
}
		

void menu(){
	cout<<"Welcome: "<<unamearr[i]<<endl;
			cout << "MAIN MENU"<<endl;
			//select option:
			cout << "To SEARCH for a Student's Result --- Press F"<<endl;
			cout << "To UPDATE  a Student's Result --- Press U"<<endl;
			cout << "To SAVE a Student's Result to a file --- Press P"<<endl;
			cout << "To VIEW ALL Results --- Press A"<<endl;
			cout << "To EXIT the program --- Press E"<<endl;
			
			
}
		