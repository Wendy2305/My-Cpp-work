// basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {


string username;
string password;

char option;

cout << "Welcome to the result management system";
cout << "\n";
cout << "Provide your login details";
cout << "\n";



//Create the file
 ofstream myfile;
//Open the file
 myfile.open ("login.txt");
 // Write to the file
 myfile << "Joe";
//Close the file
 myfile.close();
 
 login:
cout << "Enter username: ";
cin >> username;

cout << "Enter Password: ";
cin >> password;
cout << "\n";

   
           
 

if ((username == "joe") and (password == ("pass")))
{
		cout << "welcome "<< username ;
		cout << "\n";
		cout << "\n";
		cout << "MAIN MENU";
		cout << "\n";
		cout << "To SEARCH for a Student's Result --- Press F";
		cout << "\n"; 
		cout << "To UPDATE  a Student's Result --- Press U";
		cout << "\n";
		cout << "To SAVE a Student's Result to a file --- Press P";
		cout << "\n";
		cout << "To VIEW ALL Results --- Press A";
		cout << "\n";
		cout << "To EXIT the program --- Press E";
		cout << "\n";
		cout << "\n";
		cout << "Enter an Option: ";
		cin >> option;
	
	
	fstream newfile;

	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
switch(option)
{
	case 'A':
	case 'a':
		
		 newfile.open("tpoint.txt",ios::in); //open a file to perform read operation using file object

		   if (newfile.is_open()) //checking whether the file is open
		   {
   
		      string tp;
		      while(getline(newfile, tp)) //read data from file object and put it into string.
		      {
	  
		         cout << tp << "\n"; //print the data of the string
		      }
		      newfile.close(); //close the file object.
		
			}
			break;
		
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	case 'E':
	case 'e':
  		cout << " Thanks for using the result management system ";
  		break;
  	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  	case 'F':
  	case 'f':
  		int offset;
			string line;
			string search;
			cout<<"Enter name, matric no or test score to search: ";
			cin>>search;
			//string search = "Chinwendu"; // test variable to search in file
			// open file to search
			newfile.open("tpoint.txt",ios::in);
			if(newfile.is_open()) {
	    		while(!newfile.eof()) {
	        		getline(newfile, line);
	        		if ((offset = line.find(search, 0)) != string::npos) {
	            		cout << "found: " << line << endl;
	            		}
    }
    newfile.close();
}
else cout << "Unable to open file.";
	  }
	            
	//default:
	//	cout<<"Invalid Statement"<<endl;

}










else{


	cout << "Invalid username and password";
	cout << "\n";
	cout << "Kindly re-enter a valid username and password";
	cout << "\n";
	goto login;
}
	
}


