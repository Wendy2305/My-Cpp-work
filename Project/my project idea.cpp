// basic file operations
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () {

fstream myfile;
char username;
char password;
string line;
string option;

//Array for correct usernames and passwords
char correct_username[3][50] = {"moses", "james", "sarah"};
char correct_password[3][50] = {"admin1", "admin2", "admin3"};

//Putting the three usernames into a file
myfile.open("admin.txt", ios::out);
if(myfile.is_open()){
	for (int i=0; i<3; ++i){
		cout<<"Username: "<<correct_username[i]<<endl;
		cout<<"Password: "<<correct_password[i]<<endl;
		myfile.close();
	}
}


cout << "Welcome to the result management system "<<endl;
cout << "Provide your login details"<<endl;

 login:
cout << "Enter username: ";
cin >> username;

cout << "Enter Password: ";
cin >> password;
cout << "\n";

for(int i=0; i<3; ++i){
	if ((username==correct_username[i]) and (password==correct_password[i])){
			cout << "welcome "<< correct_username[i] ;
		cout << "\n";
		cout << "\n";
		cout << "MAIN MENU"<<endl;
		cout << "To SEARCH for a Student's Result --- Press F"<<endl;
		cout << "To UPDATE  a Student's Result --- Press U"<<endl;
		cout << "To SAVE a Student's Result to a file --- Press P"<<endl;
		cout << "To VIEW ALL Results --- Press A"<<endl;
		cout << "To EXIT the program --- Press E"<<endl;
		cout << "Enter an Option: ";
		cin >> option;
		
			fstream newfile;
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	if ((option == "A") or (option == "a"))
	
	{
		
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
		
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  	if ((option == "E") or (option == "e"))
  	{
  		cout << " Thanks for using the result management system ";
	  }
  	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  	if ((option == "F") or (option == "f"))
  	{
  	int offset;
string line;
string search = "a"; // test variable to search in file
// open file to search
newfile.open("tpoint.txt",ios::in);
if(newfile.is_open()) {
    while(!newfile.eof()) {
        getline(newfile, line);
        if ((offset = line.find(search, 0)) != string::npos) {
            cout << "found: " << search << endl;
        }
    }
    newfile.close();
}
else cout << "Unable to open file.";
	  }
  
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
  
    ///	if ((option == "U") or (option == "U"))
  	//{
  		//newfile.open("tpoint.txt",ios::out);  // open a file to perform write operation using file object
  // if(newfile.is_open()) //checking whether the file is open {
   //{
   
   
    //  newfile<<"Tutorials point \n"; //inserting text
      //newfile.close(); //close the file object
   //}
	 // }
	  
///////////////////////////////////////////////////////////////////////////////	  

}
}
























else {

	cout << "Invalid username and password";
	cout << "\n";
	cout << "Kindly re-enter a valid username and password";
	cout << "\n";
	goto login;
}

}
	}
	
	

