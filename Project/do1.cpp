// basic file operations
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;



int main(){
	
		string fname;
		string lname;
  		string matno;
  		string csc201;
  		string csc205;
  		string mth201;
  		string mth205;
  		string gst201;
  		string gpa;
  		
  		string fnamearr[41];
  		string lnamearr[41];
  		string matnoarr[41];
  		string csc201arr[41];
  		string csc205arr[41];
  		string mth201arr[41];
  		string mth205arr[41];
  		string gst201arr[41];
  		string gpaarr[41];
  		
  		
  		fstream newfile;
newfile.open ("tpoint.txt");
string line;	

 if (newfile.is_open())
   {
   int i=0;
  // getline(newfile, line);
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
       //   cout<< "\n";
         
	i++;
        
      }
      newfile.close(); //close the file object.
		
	}	
	
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
	
	
	
	
}