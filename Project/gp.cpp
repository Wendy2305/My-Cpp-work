// basic file operations
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
using namespace std;


int main () {

string namearr[1000];
  		string matnoarr[1000];
  		string csc201arr[1000];
  		string csc205arr[1000];
  		string mth201arr[1000];
  		string mth205arr[1000];
  		string gst201arr[1000];
  		string gpaarr[1000];

string username;
string password;
const int num = 25;


string option;

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
	
	if ((option == "A") or (option == "a"))
	
	{
		
		 newfile.open("student.txt",ios::in); //open a file to perform read operation using file object

   if (newfile.is_open()) //checking whether the file is open
   {
   
      string tp;
      while(getline(newfile, tp)) //read data from file object and put it into string.
      {
	  
         cout << tp << "\n"; //print the data of the string
      }
      newfile.close(); //close the file object.
		
	}
}
		
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  	if ((option == "E") or (option == "e"))
  	{
  		cout << " Thanks for using the result management system ";
	  }
  	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  	if ((option == "u") or (option == "U"))
  	{
  		string players[50];
  		int i = 0;
  		int j = 0;
  		
  		string name;
  		string matno;
  		string csc201;
  		string csc205;
  		string mth201;
  		string mth205;
  		string gst201;
  		string gpa;
  		
  		
  		
  		
  		newfile.open("student.txt",ios::in);
  		
  		  while (!newfile.eof())
    {
    
    	
        getline(newfile, name, '	');
        namearr[i]=name;
        getline(newfile, matno, '	');
        matnoarr[i] = matno;
        getline(newfile, csc201, '	');
        csc201arr[i]=csc201;
        getline(newfile, csc205, '	');
        csc205arr[i]=csc205;
        getline(newfile,mth201 , '	');
        mth201arr[i]=mth201;
        getline(newfile, mth205, '	');
         mth205arr[i]=mth205;
        getline(newfile, gst201, '	');
         gst201arr[i]=gst201;
         getline(newfile, gpa, '	');
          gpaarr[i]=gpa;
          
        
       
        
        
        
        
        
        
        
        
    }    
    
   


for (int i = 0; i < 41 ; ++i)
        
        {
          /* 
            getline(newfile, name,'	');
            getline(newfile, matno,'	');
            getline(newfile, csc201,'	');
            getline(newfile, csc205,'	');
            getline(newfile, mth201,'	');
            getline(newfile, mth205,'	');
            getline(newfile, gst201,'	');
            getline(newfile, gpa,'	');
            
            */
            
            
            
            
      		
		
		    
            
            
            
            
        cout << namearr[i]<<"\t";
        cout << matnoarr[i]<<"\t";
    cout << csc201arr[i]<<"\t";
    cout << csc205arr[i]<<"\t";
    cout << mth201arr[i]<<"\t";
    cout << mth205arr[i]<<"\t";
    cout << gst201arr[i]<<"\t";
    cout << gpaarr[i]<<"\n";
        
      /*  cout << name<<;
        cout << matno;
        cout << csc201;
        cout << csc205;
        cout << mth201;
        cout << mth205;
        cout << gst201;
        cout << gpa;*/
        }
  return 0;







}


        


  
  
  
  
  
  
  
  
  
  
  
  
  

	  
  
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
  
  
  	if ((option == "f") or (option == "F"))
  	{
	  
  
  int offset;
        string line;
        string search;
        
        cout<< "Enter matric no: ";
        cin>> search;
        
        newfile.open("student.txt", ios::in);
        
        if(newfile.is_open())
		{
			while (!newfile.eof())
			{
				getline(newfile,line);
				if ((offset = line.find(search,0)) != string ::npos)
				{
					cout<< "Name	Matno	CSC201	CSC205	MTH201	MTH205	GST201	GPA	"<<endl;
					cout << line<< endl;
				}
			}
			newfile.close();
							}
		else cout << "unable to open file.";
		
	}
	  
///////////////////////////////////////////////////////////////////////////////	  






}




















else {

	cout << "Invalid username and password";
	cout << "\n";
	cout << "Kindly re-enter a valid username and password";
	cout << "\n";
	goto login;
}

}