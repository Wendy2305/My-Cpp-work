#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>
using namespace std;


string MATRIC[34];
    string NAME1[34];
    string NAME2[34];
   // string names[34];
    int CSC201[34];
    int CSC205[34];
    int MTH201[34];
    int MTH205[34];
    int GST201[34];
    float GPA[34];

//reading from files to create array
void arrays(){
    string reader;

	int i = 0;
	int j = 0;
	int skip = 0;
	ifstream myfile("students.txt");
	if(myfile.is_open()){
	    while(myfile>>reader){
	        skip++;
            if(skip>10){
	        i++;
	        //index[j] = i-1;
	        //j++;
	        switch(i){
                case 1:{
                    NAME1[j] = reader;
                    break;
                }
                case 2:{
                    NAME2[j] = reader;
                    break;
                }
                case 3:{
                    MATRIC[j] = reader;
                    break;
                }
                case 4:{
                    stringstream readers(reader);
                    readers>>CSC201[j];
                    break;
                }
                case 5:{
                    stringstream readers(reader);
                    readers>>CSC205[j];
                    break;
                }
                case 6:{
                    stringstream readers(reader);
                    readers>>MTH201[j];
                    break;
                }
                case 7:{
                    stringstream readers(reader);
                    readers>>MTH205[j];
                    break;
                }
                case 8:{
                    stringstream readers(reader);
                    readers>>GST201[j];
                    break;
                }
                case 9:{
                    stringstream readers(reader);
                    readers>>GPA[j];
                    break;
                }
	        }
            if(i == 9){
                i=0;
                j+=1;
            }
            }
	    }
       // cout << i;

    }else{cout << "Unable to open file\n";}
}

//Getting garde pint
int grade_point(int gp) {
	if(gp<45) {
		gp=0;
	} else if(gp<50) {
		gp=2;
	} else if(gp<60) {
		gp=3;
	} else if(gp<70) {
		gp=4;
	} else if(gp>=70) {
		gp=5;
	}

	return gp;
}

//Getting GPA
float GPAS(int a, int b, int c, int d, int e) {
	float gpa;
	a = grade_point(a);
	b = grade_point(b);
	c = grade_point(c);
	d = grade_point(d);
	e = grade_point(e);

	gpa = (a+b+c+d+e)/5.0;
	return gpa;
}

// Test validity of inputed score for update
int valid(string str) {
	int output;

	char non_int[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM~!@#$%^&*()-=_+\\}|{:',.<>/?`'";
	int mistake = 0;
	int n = sizeof(str)/sizeof(str[0]);
	int m = sizeof(non_int)/sizeof(non_int[0]);
	n-=1;
	m-=1;
	int i=0,j=0;
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			if(non_int[j] == str[i]) {
				mistake+=1;
				break;
			}
		}
		if(non_int[j]==str[i]){
            break;
		}
	}
	if(mistake>0) {
		return -1;
	} else {
        stringstream strs(str);
        strs>>output;
		return output;
	}
}


int main(){
//    int status;
//    status = remove("Names.txt");
//    if(status==0)
//        cout << "REmoved\n";
//    else
//        cout << "MiSTAKE\n";
   // string mat;
    arrays();

    char option;
menu:
	cout <<"\t\tMain Menu\n\n";

	cout << "To SEARCH for a Student's Result Press F\n";
	cout << "To UPDATE a Student's Result Press U\n";
	cout << "To SAVE a Student's Result to a File Press P\n";
	cout << "To VIEW all Results Press A\n";
	cout << "EXIT Program Press E\n\n";
	cout << "Enter an option: \n";
	cin >> option;
    int n = sizeof(MATRIC)/sizeof(MATRIC[0]); //gets the number of elements in an array
	switch(option) {
		case 'F':
		case 'f': {
			//SEARCH
			//int n = sizeof(MATRIC)/sizeof(MATRIC[0]); //gets the number of elements in an array
			string mat = "Empty";

			cout << "SEARCH RECORDS" << endl;
			cout << "Enter Student's Matriculation Number: ";
			cin >> mat;
			int c=0;
			//GET THE INDEX OF THE MATRIC NUMBER ENTERED
			while(c<n) {
				if(MATRIC[c] == mat) {
					break;
				}
				c++;
			}
			//IF THE MARTIC NUMBER IS INVAID
			if(c==n) {
				cout << "No such Matriculation Number exist" << endl;
				goto menu;
			}
			//float gpa;
			cout << "Student's Name\t" << NAME1[c] << " " << NAME2[c];
			cout << "\nMatric No\t" << MATRIC[c];
			cout << "\nCSC201\t" << CSC201[c];
			cout << "\nCSC205\t" << CSC205[c];
			cout << "\nMTH201\t" << MTH201[c];
			cout << "\nMTH205\t" << MTH205[c];
			cout << "\nGST201\t" << GST201[c] ;
			cout << "\n\nGPA    \t" << GPA[c] << "\n";
			cout << "\n";
			goto menu;
			break;
		}
		case 'U':
		case 'u': {
			//UPDATE
			remove("stuents.txt");
			string mat = "Empty";

			cout << "UPDATE RECORD" << endl;
			cout << "Enter Student's Matriculation Number: ";
			cin >> mat;
			int c=0;

			while(c<n) {
				if(MATRIC[c] == mat) {
					break;
				}
				c++;
			}

			if(c==n) {
				cout << "No such Matriculation Number exist" << endl;
				goto menu;
			}
			float gpa;
			cout << "Student's Name\t" << NAME1[c] << " " << NAME2[c];
			cout << "\nMatric No\t" << MATRIC[c];
			int loop = 0;
invalid:
			for(int i=loop; i<5; i++) {
			//	int score;
				//string str = "abc";

				switch(i) {
					case 0:{
					    string str;
					    int score1;
						cout << "\nCSC201\t" << CSC201[c] << "\nUpdate CSC201 score\nEnter score: ";
						cin >> str;
						score1 = valid(str);
						if((score1<0)||(score1>100)) {
							cout << "Invalid Value\n";
							loop = i;
							goto invalid;
						} else {
							CSC201[c] = score1;
							cout << CSC201[c] << endl;
						}
						break;
					}
					case 1: {
					    string str1;
					    int score2;
						cout << "\nCSC205\t" << CSC205[c] << "\nUpdate CSC205 score\nEnter score: ";
						cin >> str1;
						score2 = valid(str1);
						if((score2<0)||(score2>100)) {
							cout << "Invalid Value\n";
							loop = i;
							goto invalid;
						} else {
							CSC205[c] = score2;
							cout << CSC205[c]<<endl;
						}
						break;
					}
					case 2:{
					    string str2;
					    int score3;
						cout << "\nMTH201\t" << MTH201[c] << "\nUpdate MTH201 score\nEnter score: ";
						cin >> str2;
						score3 = valid(str2);
						if((score3<0)||(score3>100)) {
							cout << "Invalid Value\n";
							loop = i;
							goto invalid;
						} else {
							MTH201[c] = score3;
							cout << MTH201[c] << endl;
						}
						break;
					}
					case 3:{
					    string str3;
					    int score4;
						cout << "\nMTH205\t" << MTH205[c] << "\nUpdate MTH205 score\nEnter score: ";
						cin >> str3;
						score4 = valid(str3);
						if((score4<0)||(score4>100)) {
							cout << "Invalid Value\n";
							loop = i;
							goto invalid;
						} else {
							MTH205[c] = score4;
							cout << MTH205[c] <<endl;
						}
						break;
					}
					case 4:{
					    string str4;
					    int score5;
						cout << "\nGST201\t" << GST201[c] << "\nUpdate GST201 score\nEnter score: ";
						cin >> str4;
						score5 = valid(str4);
						if((score5<0)||(score5>100)) {
							cout << "Invalid Value\n";
							loop = i;
							goto invalid;
						} else {
							GST201[c] = score5;
							cout << GST201[c] <<endl;
						}
						break;
					}
				}
			}
			cout << "Previous GPA: " << GPA[c] << endl;
			GPA[c] = GPAS(CSC201[c], CSC205[c], MTH201[c], MTH205[c], GST201[c]);
			cout << "Current GPA: " << GPA[c] << "\n";
			cout << "\n";
			ofstream updated("students.txt");
			if(updated.is_open()){
                for(int i=-1;i<n;i++){
                    if(i==-1){
                        updated << "Students Names\t Matric No\t CSC201\t CSC205\t MTH201\t MTH205\t GST201\t GPA\n";
                    }else if(i==c){
                        updated << NAME1[c] << " " << NAME2[c] << "\t" << MATRIC[c] << "\t"<<CSC201[c] << "\t"<<CSC205[c]<< "\t"<<MTH201[c]<<"\t"<<MTH205[c]<<"\t"<<GST201[c]<<"\t"<<GPA[c]<<"\n";
                    }else{
                        updated << NAME1[i] << " " << NAME2[i] << "\t" << MATRIC[i] << "\t"<<CSC201[i] << "\t"<<CSC205[i]<< "\t"<<MTH201[i]<<"\t"<<MTH205[i]<<"\t"<<GST201[i]<<"\t"<<GPA[i]<<"\n";
                    }
                }
			}else{cout << "Unable to open file\n";}
			goto menu;
			break;
		}
		case 'E':
		case 'e':
			cout<<"Code Exited"<<endl;
			break;
		default:
			cout<<"Invalid entry.\nTry again\n"<<endl;
			goto menu;
	}
    return 0;
}
