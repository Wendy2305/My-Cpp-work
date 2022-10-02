#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <cctype>
#include <algorithm>

using namespace std;
//error occurs when you save more than once
//print properly
void view_result(string fname);
void search_result(string fname, string word);
void update_result(string matric);
void save_result();
void menu();
int utemp;

vector<vector<string>> content;
vector<string> row;
string line, word, change;
int temp, record;


main(){
    string user, pass;
    vector<vector<string>> auth;
	vector<string> udata;
	string line, word;
    cout<<"           Pan Atlantic University"<<"\n";
    cout<<"           Result Management System"<<"\n";
    cout<<"\n";
    cout<<"-----------Login-------------------";


	fstream file ("user.csv", ios::in);
	if(file.is_open())
	{
		while(getline(file, line))
		{
			udata.clear();
 
			stringstream str(line);
 
			while(getline(str, word, ','))
				udata.push_back(word);
			    auth.push_back(udata);
		}
int i;
while(true){
    cout<<"\nusername: ";
    cin>>user;
    cout<<"PAssword: ";
    cin>>pass;
    
    for(i=0;i<auth.size();i++){
         if(auth[i][0]==user && auth[i][1]==pass){
                menu();
            }

    }
     cout<<"incorrect username or password\n";
     cout<<"Kindly re-enter a valid password";
     cout<<"\n";
}
    
}else{
    cout<<"coutldn't open file";
}
}
  



void menu(){
    char select;
    string matricInput;
    while(true){
        cout<<"\n";
        cout<<"      MAIN MENU\n";
        cout<<"To SEARCH for a Student's Result --- Insert F\n";
        cout<<"To UPDATE a Student's Result --- Insert U\n";
        cout<<"To SAVE a Student's Result to File --- Insert P\n";
        cout<<"To VIEW ALLL Results --- Insert A\n";
        cout<<"To EXIT the program --- Insert E";
        cout<<"\n";
        cout<<"Enter an option: ";
        cin>>select;
    switch (toupper(select)){
        case 'F':
            cout<<"SEARCH RECORDS\n";
            cout<<"Enter Student's MAtriculation Number: ";
            cin>>matricInput;
            search_result("results.csv", matricInput);
            break;
        case 'U':
            cout<<"Enter Student's MAtriculation Number: ";
            cin>>matricInput;
            update_result(matricInput);
            break;
        case 'P':
            save_result();
            break;
        case 'A':
            view_result("results.csv");
            break;
        case 'E':
             cout<<"logged out";
             exit(1);
        default:
            menu();
        }
    }



}

void search_result(string fname, string check){

	fstream file (fname, ios::in);
	if(file.is_open())
	{
		while(getline(file, line))
		{
			row.clear();
 
			stringstream str(line);
 
			while(getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
		}
        for(int i=0;i<content.size();i++){
            auto it = find(content[i].begin(), content[i].end(), check);
            if(it != content[i].end()){
                cout<<"\nStudent Name: "<<content[i][distance(content[i].begin(), it)-1]<<"\n";
                cout<<"Matric No: "<<content[i][distance(content[i].begin(), it)]<<"\n";
                cout<<"CSC201: "<<content[i][distance(content[i].begin(), it)+1]<<"\n";
                cout<<"CSC205: "<<content[i][distance(content[i].begin(), it)+2]<<"\n";
                cout<<"MTH201: "<<content[i][distance(content[i].begin(), it)+3]<<"\n";
                cout<<"MTH205: "<<content[i][distance(content[i].begin(), it)+4]<<"\n";
                cout<<"GST201: "<<content[i][distance(content[i].begin(), it)+5]<<"\n";
                break;
        }
        }
    
	}else{
		cout<<"Could not open the file\n";
    }
}


    

void view_result(string fname){

 
	fstream file (fname, ios::in);
	if(file.is_open())
	{
		while(getline(file, line))
		{
			row.clear();
 
			stringstream str(line);
 
			while(getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
		}
	}
	else{
        cout<<"Could not open the file\n";
    }
		
 
	for(int i=0;i<content.size();i++){
        cout<<content[i][0]<<"    "<<content[i][1]<<"    "<<content[i][2]<<"    "<<content[i][3]<<"    "<<content[i][4]<<"    "<<content[i][5]<<"    "<<content[i][6]<<"    "<<content[i][7]<<"\n";
	}

}


//finish it up last
void update_result(string matric){
	fstream file ("example.csv", ios::in);

	if(file.is_open()){
		while(getline(file, line)){
			row.clear();
 
			stringstream str(line);
 
			while(getline(str, word, ','))
				row.push_back(word);
			content.push_back(row);
        }
		}else{

        }


for(int i=0;i<content.size();i++){
    auto it = find(content[i].begin(), content[i].end(), matric);
    if(it != content[i].end()){
        cout<<"Matric No: "<<content[i][distance(content[i].begin(), it)]<<"\n";
        temp = i;
        break;
        }
}
cout<<"----------Mutable Records----------\n";
cout<<"2 for CSC201\n";
cout<<"3 for CSC205\n";
cout<<"4 for MTH205\n";
cout<<"5 for MTH203\n";
cout<<"6 for GST201\n";
cout<<"7 for GPA\n";
cout<<"8 go back to menu";
cout<<"-------------------------------------\n";
cout<<"input record: ";
cin>>record;
switch (record){
    case 2:
         cout<<"old CSC201 score: "<<content[temp][2]<<"\n";
         cout<<"new CSC201 score: ";
         cin>>content[temp][2];
         cout<<content[temp][2];
        break;
    case 3:
          cout<<"old CSC205 score: "<<content[temp][3]<<"\n";
          cout<<"new CSC205 score: ";
          cin>>content[temp][3];
          cout<<content[temp][3];
          break;
    case 4:
          cout<<"old MTH205 score: "<<content[temp][4]<<"\n";
          cout<<"new MTH205 score: ";
          cin>>content[temp][4];
          cout<<content[temp][4];        
          break;
    case 5:
          cout<<"old MTH203 score: "<<content[temp][5]<<"\n";
          cout<<"new MTH203 score: ";
          cin>>content[temp][5];
          cout<<content[temp][5];
          break;
    case 6:
          cout<<"old GST201 score: "<<content[temp][6]<<"\n";
          cout<<"new GST201 score: ";
          cin>>content[temp][6];
          cout<<content[temp][6];
          break;
    case 7:
          cout<<"old GPA: "<<content[temp][7]<<"\n";
          cout<<"new GPA: ";
          cin>>content[temp][7];
          cout<<content[temp][7];
          break;
    case 8:
         menu();
        }
	
    fstream myfile ("example.csv",ios::out);
    for(int i=0;i<content.size();i++){
        myfile << content[i][0]<<",";
        myfile << content[i][1]<<",";
        myfile << content[i][2]<<",";
        myfile << content[i][3]<<",";
        myfile << content[i][4]<<",";
        myfile << content[i][5]<<",";
        myfile << content[i][6]<<",";
        myfile << content[i][7];

        myfile<<endl;

        
                        
                
    }
        myfile.clear();

}


void save_result(){

}