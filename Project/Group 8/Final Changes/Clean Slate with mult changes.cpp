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
	char option[] = " ";
	
	int i;
	string answer;
		fstream newfile;
		fstream savefile;
		string fname;
		string lname;
  		string matno;
  		string csc201;
  		string csc205;
  		string mth201;
  		string mth203;
  		string gst201;
  		string gpa;
  		
  		string line;
		string search;
		string update;	
		string x;
		string save;
	
  		string file;
  		string ext;
  		char filename;
  		
  		string fnamearr[41];
  		string lnamearr[41];
  		string matnoarr[41];
  		string csc201arr[41];
  		string csc205arr[41];
  		string mth201arr[41];
  		string mth203arr[41];
  		string gst201arr[41];
  		string gpaarr[41];
		int j;
		
int main(){
				// what this does is to put each word from our file into arrays. So I created arrays for everything; csc201, mth201, firstname, last name e.t.c
				fstream newfile;
				newfile.open("database.txt",ios::in);
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
					        getline(newfile, mth203, '	');
					        mth203arr[i]= mth203;
					        getline(newfile, gst201, '	');
					        gst201arr[i]= gst201;
					        getline(newfile, gpa);
					        gpaarr[i]=gpa;
					          
						i++;
					      }
					      newfile.close(); //close the file object.	
	}	 
	
	
	ofstream myfile("security.txt"); //'security.txt' is the file that stores our usernames and passwords
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
	/////////////////////////////////////////////////////////////////////	
	login:
		cout << "Enter username: ";
		cin >> username;

		cout << "Enter Password: ";
		cin >> password;
		cout << "\n";
	
	
	for(i=0; i<3; ++i){
		if((strcmp(arr_username[i],username)==0) and(strcmp(arr_password[i],password)==0)){ //comparing to see if our the entered username and password match the ones in our security file
		 	cout<<"Welcome: "<<arr_username[i]<<endl;
			cout << "MAIN MENU"<<endl;
			selectoption:
			cout << "To SEARCH for a Student's Result --- Press F"<<endl;
			cout << "To UPDATE a Student's Result --- Press U"<<endl;
			cout << "To SAVE a Student's Result to a file --- Press P"<<endl;
			cout << "To VIEW ALL Results --- Press A"<<endl;
			cout << "To EXIT the program --- Press E"<<endl;
			op:
			cout << "Enter an Option: ";
			cin >> option;
		
			if (strlen(option)>1){
				goto op;
			}

			else{
					switch(option[0]){
						case 'A':
						case 'a':
							{
							
							 newfile.open("database.txt",ios::in); //open a file to perform read operation using file object
							   if (newfile.is_open()){ //checking whether the file is open
							   cout<<endl;
							   cout<<endl;
							   cout<<"Name \t Matno\t CSC201\t CSC205\t MTH201\t MTH203\t GST201\t GPA"<<endl; 
							   //this for loop prints out all the arrays we created.
									for (int i=1;i<41;++i){  
								        cout << fnamearr[i]<<" ";
								        cout << lnamearr[i]<<"\t";
								        cout << matnoarr[i]<<"\t";
								        cout << csc201arr[i]<<"\t";
								        cout << csc205arr[i]<<"\t";
								        cout << mth201arr[i]<<"\t";
								        cout << mth203arr[i]<<"\t";
								        cout << gst201arr[i]<<"\t";
								         cout << gpaarr[i]<<"\n";
										}
							      newfile.close();
								  } //close the file object.
								  
								    there:
								  cout << "Do you want to do other things in this program? ('yes' or 'no') ";
								cin >> answer;
								cout << "\n";
								
								if (answer == "yes" or "YES" or "Yes" or "yEs"){
									goto selectoption;     
								}
								else if (answer == "no" or "NO" or "No" or "nO"){
									cout << " Thanks for using the result management system ";
								}
								
									else{
									cout << " Invalid response...Answer yes or no \n ";
									goto there;
								}
								break;
						}
					//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
						case 'E':
						case 'e':
					  		cout << " Thanks for using the result management system \n";
					  		return 0;
					  		break;
					  	
					///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					  	case 'F':
					  	case 'f':
					  		{
								cout<<endl;
								cout<<"SEARCH RECORD"<<endl;
								searchagain:
								cout<<"Enter Matriculation Number to search: ";
								cin>>search;
								
								newfile.open("database.txt",ios::in);
								if(newfile.is_open()) {
									
									
						    		while(getline(newfile, line)){
											if ((line.find(search, 0)) != string::npos) { //this helps us search to see if what we are searching for is actually inside the file
						            			cout << "Student Identified! "<<endl;
						            			cout << "First name: " << fnamearr[i] << endl;
						            			cout << "Last name: " << lnamearr[i] << endl;
						            			cout << "Matric no: " << matnoarr[i] << endl;
						            			cout << "CSC 201: " << csc201arr[i] << endl;
						            			cout << "CSC 205: " << csc205arr[i] << endl;
						            			cout << "MTH 201: " << mth201arr[i] << endl;
						            			cout << "MTH 203: " << mth203arr[i] << endl;
						            			cout << "GST 201: " << gst201arr[i] << endl;
						            			cout << "GPA: " << gpaarr[i] << endl;	
						            		}
						            		
						            			else
						    						{
						    							cout<< "cannot find student...Try again \n";
						    							goto searchagain;
													}
						            		
						            		
						     						 ++i;    
														}
					  									 newfile.close();}
					  						
					  			 cout << "Do you want to do other things in this program? ('yes' or 'no') ";
								cin >> answer;
								cout << "\n";
								
								if (answer == "yes" or "YES" or "Yes" or "yEs") 
								{
									
									goto selectoption;     
								}
								else if (answer == "no" or "NO" or "No" or "nO")
								{
									cout << " Thanks for using the result management system ";
								}
								
									else
								{
									cout << " Invalid response...Answer yes or no \n ";
									goto there;
								}
								
									break;
								}
				////////////////////////////////////////////////////////////////////////////////////////////
							case 'U':
					  	case 'u':
							{
								cout<<endl;
								cout<<"UPDATE RECORD"<<endl;
								tryagain:
									
								cout<<"Enter Matriculation Number to search: ";
								cin>>update;  //we input the matric number of the person we want to update
								
								newfile.open("database.txt",ios::in); 
								if(newfile.is_open()) {
						    		while(getline(newfile, line)){
						        			if ((line.find(update, 0)) != string::npos) {
											
											  //this helps us search to see if what we are searching for is actually inside the file
						        		
						            			cout << "Student Identified! "<<endl;
						            			cout << "First name: " << fnamearr[i] << endl;
						        				cout << "Last name: " << lnamearr[i] << endl;
						            			cout << "Matric no: " << matnoarr[i] << endl;
						            			cout << "Old CSC 201: " << csc201arr[i] << endl;
						            			cout << "Old CSC 205: " << csc205arr[i] << endl;
						            			cout << "Old MTH 201: " << mth201arr[i] << endl;
						            			cout << "Old MTH 203: " << mth203arr[i] << endl;
						            			cout << "Old GST 201: " << gst201arr[i] << endl;
						            			cout << "Old GPA: " << gpaarr[i] << endl;
						            			cout <<"Update CSC 201 Score"<<endl;
						            			cout <<"Enter New CSC 201 Score:";
						            			cin >> csc201arr[i];  	//Here we our entering a new value inside that index
												                               
												cout << "Old CSC 205: " << csc205arr[i] << endl;
						            			cout <<"Update CSC 205 Score"<<endl;
						            			cout <<"Enter New CSC 205 Score:";
						            			cin >> csc205arr[i];	//Here we our entering a new value inside that index
						            			
						            			cout << "MTH 201: " << mth201arr[i] << endl;
						            			cout <<"Update MTH 201 Score"<<endl;
						            			cout <<"Enter New MTH 201 Score:";
						            			cin >> mth201arr[i];	//Here we our entering a new value inside that index
						            		
						            			cout << "MTH 203: " << mth203arr[i] << endl;
						            			cout <<"Update MTH 203 Score"<<endl;
						            			cout <<"Enter New MTH 203 Score:";
						            			cin >> mth203arr[i];	//Here we our entering a new value inside that index
						            		
						            			cout << "GST 201: " << gst201arr[i] << endl;
						            			cout <<"Update GST 201 Score"<<endl;
						            			cout <<"Enter New GST 201 Score:";
						            			cin >> gst201arr[i];	//Here we our entering a new value inside that index
						            		
						            			cout << "GPA: " << gpaarr[i] << endl;
						            			cout <<"Update GPA Value"<<endl;
						            			cout <<"Enter New GPA value:";
						            			cin >> gpaarr[i];	//Here we our entering a new value inside that index
						            		
												cout<<"Record Updated and Written to File"<<endl;
						    						}
						    						
						    					
									ofstream myfile("database.txt"); 
														//we open database.txt so we can put our updated values into the file again
									if (myfile.is_open()){
										myfile<<"Name \t Matno\t CSC201\t CSC205\t MTH201\t MTH203\t GST201\t GPA"<<endl;
										for (i=1; i<41; ++i){		//this compiles all our data including our updated records
										myfile << fnamearr[i]<<" ";   //myfile is used to put data into our database file.
								        myfile << lnamearr[i]<<"\t";
								        myfile << matnoarr[i]<<"\t";
								        myfile << csc201arr[i]<<"\t";
								        myfile << csc205arr[i]<<"\t";
								        myfile << mth201arr[i]<<"\t";
								        myfile << mth203arr[i]<<"\t";
								        myfile << gst201arr[i]<<"\t";
								        myfile << gpaarr[i]<<"\n";
										}
										//We close the file so it does not disrupt anything
										myfile.close();
										}
									}
																   cout << "Do you want to do other things in this program? ('yes' or 'no') ";
								cin >> answer;
								cout << "\n";
								
								if (answer == "yes" or "YES" or "Yes" or "yEs")
								{
									
									goto selectoption;     
								}
								else if (answer == "no" or "NO" or "No" or "nO")
								{
									cout << " Thanks for using the result management system ";
								}
								
									else
								{
									cout << " Invalid response...Answer yes or no \n ";
									goto there;
								}
								
										break;
												}
												
											}
				////////////////////////////////////////////////////////////////////////////////////////////////
					case 'P':
					case 'p':
						{
								cout<<endl;
								cout<<"SAVE RECORD"<<endl;
								again:
								cout<<"Enter Matriculation Number to search: ";
								cin>>save;
											
							newfile.open("database.txt",ios::in | ios::out);
								if(newfile.is_open()) {
						    		while(getline(newfile, line)){
											if ((line.find(save, 0)) != string::npos){ //this helps us search to see if what we are searching for is actually inside the file
						            			cout << "Student Identified! "<<endl;
						            			cout << "First name: " << fnamearr[i] << endl;
						            			cout << "Last name: " << lnamearr[i] << endl;
						            			cout << "Matric no: " << matnoarr[i] << endl;
						            			cout << "CSC 201: " << csc201arr[i] << endl;
						            			cout << "CSC 205: " << csc205arr[i] << endl;
						            			cout << "MTH 201: " << mth201arr[i] << endl;
						            			cout << "MTH 203: " << mth203arr[i] << endl;
						            			cout << "GST 201: " << gst201arr[i] << endl;
						            			cout << "GPA: " << gpaarr[i] << endl;	
						            			cout <<"File saved to "<<fnamearr[i]<<".txt"<<endl;
						            			newfile.close();
						            			
						            	
						            			
						            			string file = fnamearr[i]; //here we are converting the firstname into a string
						            			ext = ".txt";              //I created ext which contains .txt
					  							string filename = file.append(ext); ///i used the append function to add .txt to the end of the first name.
					  							cout<<filename<<endl;               //I've created a file name which changes depending on the person's record we are using.
						            		
						            				ofstream savefile (filename.c_str()); //.c_str() is a function which converts our file name to datatype char. This is so that offstream can create the file.
						            					if (savefile.is_open()){
						            						
						            						savefile <<"First name: " << fnamearr[i]<<"\n";
													        savefile <<"Last name: "<< lnamearr[i]<<"\n";
													        savefile <<"Matno:" << matnoarr[i]<<"\n";
													        savefile <<"CSC 201: "<<csc201arr[i]<<"\n";
													        savefile <<"CSC 205: "<<csc205arr[i]<<"\n";
													        savefile <<"MTH 201: "<< mth201arr[i]<<"\n";
													        savefile <<"MTH 203: "<< mth203arr[i]<<"\n";
													        savefile <<"GST 201: "<< gst201arr[i]<<"\n";
													        savefile <<"GPA: "<< gpaarr[i]<<"\n";
													        savefile.close(); //closing the file to avoid trouble
						            						}
						            		}
						            		
						            		else
						            		{
						            			cout<< "cannot find student...Try again \n";
						    							goto again;
											}
						     						 ++i;    //counter which helps us loop through all arrays
														}
					  									
														   } 
														    cout << "Do you want to do other things in this program? ('yes' or 'no') ";
								cin >> answer;
								cout << "\n";
								
								if (answer == "yes" or "YES" or "Yes" or "yEs")
								{
									
									goto selectoption;     
								}
								else if (answer == "no" or "NO" or "No" or "nO")
								{
									cout << " Thanks for using the result management system ";
								}
								
									else
								{
									cout << " Invalid response...Answer yes or no \n ";
									goto there;
								}
								
														break;
													}
													
								default:
									{
										cout<<"Invalid option...Try again \n";
										goto op;
									}
									goto selectoption;
									}
							}
		}//closes 'if' user authentification
		
	//	else {
	//		cout << "Invalid login details...Try again \n";
	//		goto login;
	//	}
	} //closes 'of' user authentication
			return 0;
	}//closes int main
	
