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
					   newfile.close();
				}