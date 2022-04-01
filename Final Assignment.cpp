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
	//char extension[100];
	char option;
	int i;
		fstream newfile, savefile;
		string fname, lname, matno, csc201, csc205, mth201,mth205,gst201,gpa;
  		string answer;
  		string line, search,update,save;
  		string file;
  		string ext;
  		char filename;
  		
  		string fnamearr[41], lnamearr[41], matnoarr[41], csc201arr[41], csc205arr[41], mth201arr[41], mth205arr[41], gst201arr[41], gpaarr[41];
  		string unamearr[4], pwordarr[4];
  		string uname, pword;
		int j;
int main(){

				fstream newfile;
				newfile.open("database.txt",ios::in);
				 if (newfile.is_open()){
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
					          
						i++;
					      }
					      newfile.close(); //close the file object.	
	}	 
	
newfile.open("security.txt",ios::in);
				 if (newfile.is_open()){    //opening the file 'database'
					   int i=0;
					   		while(!newfile.eof()) {
					   		//getline(newfile, serialno, '	');
					   		//serialnoarr[i]=serialno;
					   		getline(newfile, uname, '	');
					        unamearr[i]=uname;
					        getline(newfile, pword);
					        pwordarr[i]=pword;
					        
					    ++i;
					}
						for (int i=0;i<4;++i){  
								        cout << unamearr[i]<<"\t";
								        cout << pwordarr[i]<<"\n";}
					    newfile.close();
					}
				else{
					cout<<"Unable to read file"<<endl;
				}
		
	login:
		cout << "Enter username: ";
		cin >> username;

		cout << "Enter Password: ";
		cin >> password;
		cout << "\n";
	
	
	for(i=0; i<3; ++i){
		if((strcmp(arr_username[i],username)==0) and(strcmp(arr_password[i],password)==0)){ //comparing to see if our the entered username and password match the ones in our security file
		 	cout<<"Welcome: "<<arr_username[i]<<endl;
		 	selectoption:
			cout << "MAIN MENU"<<endl;
			cout << "To SEARCH for a Student's Result --- Press F"<<endl;
			cout << "To UPDATE  a Student's Result --- Press U"<<endl;
			cout << "To SAVE a Student's Result to a file --- Press P"<<endl;
			cout << "To VIEW ALL Results --- Press A"<<endl;
			cout << "To EXIT the program --- Press E"<<endl;
			cout << "Enter an Option: ";
			cin >> option;
		
			/*
			there:
			cout << "Do you want to do other things in this program? ";
			cin >> answer;
			cout << "\n";
								
			if (answer == "yes" or "YES" or "Yes" or "yEs"){
			goto selectoption;     
			}
			else if (answer == "no" or "NO" or "No" or "nO") {
			cout << " Thanks for using the result management system ";
			}
								
			else{
			cout << " Invalid response...Answer yes or no \n ";
			goto there;
			}
			*/

					switch(option){
						case 'A':
						case 'a':
							{
							 newfile.open("database.txt",ios::in); //open a file to perform read operation using file object
							   if (newfile.is_open()){ //checking whether the file is open
							   cout<<endl;
							   cout<<endl;
							   cout<<"Name \t Matno\t CSC201\t CSC205\t MTH201\t MTH203\t GST201\t GPA"<<endl; 
									for (int i=1;i<41;++i){  
								        cout << fnamearr[i]<<" ";
								        cout << lnamearr[i]<<"\t";
								        cout << matnoarr[i]<<"\t";
								        cout << csc201arr[i]<<"\t";
								        cout << csc205arr[i]<<"\t";
								        cout << mth201arr[i]<<"\t";
								        cout << mth205arr[i]<<"\t";
								        cout << gst201arr[i]<<"\t";
								         cout << gpaarr[i]<<"\n";
										}
							      newfile.close();
								  } //close the file object.
								  
								there:
					  			cout << "Do you want to do other things in this program? ";
								cin >> answer;
								cout << "\n";
								
								if (answer == "yes"){
									goto selectoption;     
								}
								else if (answer == "no") {
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
							
					  		cout << " Thanks for using the result management system ";
					  		break;
					  	
					///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
					  	case 'F':
					  	case 'f':
					  		{
							
							//	string line;
							//	string search;
								cout<<endl;
								cout<<"SEARCH RECORD"<<endl;
								cout<<"Enter Matriculation Number to search: ";
								cin>>search;
								
								newfile.open("database.txt",ios::in);
								if(newfile.is_open()) {
						    		while(getline(newfile, line)){
										//for (int i=1;i<41;++i){  
						        			//getline(newfile, matnoarr[i]);
						        			if ((line.find(search, 0)) != string::npos) {
						            			cout << "Student Identified! "<<endl;
						            			cout << "First name: " << fnamearr[i] << endl;
						            			cout << "Last name: " << lnamearr[i] << endl;
						            			cout << "Matric no: " << matnoarr[i] << endl;
						            			cout << "CSC 201: " << csc201arr[i] << endl;
						            			cout << "CSC 205: " << csc205arr[i] << endl;
						            			cout << "MTH 201: " << mth201arr[i] << endl;
						            			cout << "MTH 205: " << mth205arr[i] << endl;
						            			cout << "GST 201: " << gst201arr[i] << endl;
						            			cout << "GPA: " << gpaarr[i] << endl;	
						            		}
						     						 ++i;    
														}
					  									 newfile.close();}
					  			here:
					  			cout << "Do you want to do other things in this program? ";
								cin >> answer;
								cout << "\n";
								
								if (answer == "yes"){
									goto selectoption;     
								}
								else if (answer == "no") {
									cout << " Thanks for using the result management system ";
								}
								
								else{
									cout << " Invalid response...Answer yes or no \n ";
									goto here;
								}
									break;
								}
								
								
					  			
								
				////////////////////////////////////////////////////////////////////////////////
						case 'U':
					  	case 'u':
							{
								cout<<endl;
								cout<<"UPDATE RECORD"<<endl;
								cout<<"Enter Matriculation Number to search: ";
								cin>>update;
								
								newfile.open("database.txt",ios::in); //| ios::out);
								if(newfile.is_open()) {
						    		while(getline(newfile, line)){
						        			if ((line.find(update, 0)) != string::npos) {
						        		
						            			cout << "Student Identified! "<<endl;
						            			cout << "First name: " << fnamearr[i] << endl;
						        				cout << "Last name: " << lnamearr[i] << endl;
						            			cout << "Matric no: " << matnoarr[i] << endl;
						            			cout << "Old CSC 201: " << csc201arr[i] << endl;
						            			cout <<"Update CSC 201 Score"<<endl;
						            			cout <<"Enter New CSC 201 Score:";
						            			cin >> csc201arr[i];
											//	myfile<< csc201arr[i];
						            			cout << "Old CSC 205: " << csc205arr[i] << endl;
						            			cout <<"Update CSC 205 Score"<<endl;
						            			cout <<"Enter New CSC 205 Score:";
						            			cin >> csc205arr[i];
						            		//	myfile<<csc205arr[i];
						            			cout << "MTH 201: " << mth201arr[i] << endl;
						            			cout <<"Update MTH 201 Score"<<endl;
						            			cout <<"Enter New MTH 201 Score:";
						            			cin >> mth201arr[i];
						            		//	myfile<<mth201arr[i];
						            			cout << "MTH 205: " << mth205arr[i] << endl;
						            			cout <<"Update MTH 205 Score"<<endl;
						            			cout <<"Enter New MTH 205 Score:";
						            			cin >> mth205arr[i];
						            		//	myfile<<mth205arr[i];
						            			cout << "GST 201: " << gst201arr[i] << endl;
						            			cout <<"Update GST 201 Score"<<endl;
						            			cout <<"Enter New GST 201 Score:";
						            			cin >> gst201arr[i];
						            		//	myfile<<gst201arr[i];
						            			cout << "GPA: " << gpaarr[i] << endl;
						            			cout <<"Update GPA Value"<<endl;
						            			cout <<"Enter New GPA value:";
						            			cin >> gpaarr[i];
						            		//	myfile<<gpaarr[i];
												cout<<"Record Updated and Written to File"<<endl;
						    	}
						      ++i;      		
				
				}
					   newfile.close();	}
				
									ofstream myfile("database.txt");
									if (myfile.is_open()){
										myfile<<"Name \t Matno\t CSC201\t CSC205\t MTH201\t MTH203\t GST201\t GPA"<<endl;
										for (i=1; i<41; ++i){
										myfile << fnamearr[i]<<" ";
								        myfile << lnamearr[i]<<"\t";
								        myfile << matnoarr[i]<<"\t";
								        myfile << csc201arr[i]<<"\t";
								        myfile << csc205arr[i]<<"\t";
								        myfile << mth201arr[i]<<"\t";
								        myfile << mth205arr[i]<<"\t";
								        myfile << gst201arr[i]<<"\t";
								        myfile << gpaarr[i]<<"\n";
										}
										//We close the file so it does not disrupt anything
										myfile.close();
										}
								
								left:
								cout << "Do you want to do other things in this program? ";
								cin >> answer;
								cout << "\n";
								
								if (answer == "yes"){
									goto selectoption;     
								}
								else if (answer == "no") {
									cout << " Thanks for using the result management system ";
								}
								
								else{
									cout << " Invalid response...Answer yes or no \n ";
									goto left;
								}
										
						break;
					}
				///////////////////////////////////////////////////////////////////////////////////////////
					case 'P':
					case 'p':
						{
								cout<<endl;
								cout<<"SAVE RECORD"<<endl;
								cout<<"Enter Matriculation Number to search: ";
								cin>>save;
											
							newfile.open("database.txt",ios::in | ios::out);
								if(newfile.is_open()) {
						    		while(getline(newfile, line)){
											if ((line.find(save, 0)) != string::npos){
						            			cout << "Student Identified! "<<endl;
						            			cout << "First name: " << fnamearr[i] << endl;
						            			cout << "Last name: " << lnamearr[i] << endl;
						            			cout << "Matric no: " << matnoarr[i] << endl;
						            			cout << "CSC 201: " << csc201arr[i] << endl;
						            			cout << "CSC 205: " << csc205arr[i] << endl;
						            			cout << "MTH 201: " << mth201arr[i] << endl;
						            			cout << "MTH 205: " << mth205arr[i] << endl;
						            			cout << "GST 201: " << gst201arr[i] << endl;
						            			cout << "GPA: " << gpaarr[i] << endl;	
						            			cout <<"File saved to "<<fnamearr[i]<<".txt"<<endl;
						            			newfile.close();
						            			
						            	
						            			
						            			string file = fnamearr[i];
						            			ext = ".txt";
					  							string filename = file.append(ext);
					  							cout<<filename<<endl;
						            		//	fstream savefile;
						            				ofstream savefile (filename.c_str());
						            					if (savefile.is_open()){
						            						//savefile<<"Name \t Matno\t CSC201\t CSC205\t MTH201\t MTH203\t GST201\t GPA"<<endl;
						            						savefile <<"First name: " << fnamearr[i]<<"\n";
													        savefile <<"Last name: "<< lnamearr[i]<<"\n";
													        savefile <<"Matno:" << matnoarr[i]<<"\n";
													        savefile <<"CSC 201: "<<csc201arr[i]<<"\n";
													        savefile <<"CSC 205: "<<csc205arr[i]<<"\n";
													        savefile <<"MTH 201: "<< mth201arr[i]<<"\n";
													        savefile <<"MTH 205: "<< mth205arr[i]<<"\n";
													        savefile <<"GST 201: "<< gst201arr[i]<<"\n";
													        savefile <<"GPA: "<< gpaarr[i]<<"\n";
													        savefile.close();
						            						}
						            		}
						     						 ++i;    
														}
					  									// newfile.close();
														   } //closes database.txt
								right:						   
								cout << "Do you want to do other things in this program? ";
								cin >> answer;
								cout << "\n";
								
								if (answer == "yes"){
									goto selectoption;     
								}
								else if (answer == "no") {
									cout << " Thanks for using the result management system ";
								}
								
								else{
									cout << " Invalid response...Answer yes or no \n ";
									goto right;
								}
								
														break;
													}
									default:
										cout<<"You did not select a valid option \n";
									
												}
		}//closes 'if' user authentification
	} //closes 'of' user authentication
			return 0;
	}//closes int main
	
	