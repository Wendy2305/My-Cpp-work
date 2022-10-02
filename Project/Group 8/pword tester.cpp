#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <unistd.h>

//changes :added 'YES', 'Yes', 'NO', 'nO' etc

using namespace std;

string uname;
string pword;
string serialno;
string unamearr[4];
string pwordarr[4];


int main(){
			

				fstream newfile;
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
					    newfile.close();
					}
				else{
					cout<<"Unable to read file"<<endl;
				}
					
					
				//	or "YES" or "Yes" or "yEs"
				//	or "NO" or "No" or "nO"
					
					newfile.open("security.txt",ios::in);
				 	if (newfile.is_open()){ 
						for (int i=0;i<4;++i){  
								        cout << unamearr[i]<<"\t";
								        cout << pwordarr[i]<<"\n";
								}
						newfile.close();
					}
				return 0;
	}