#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    ofstream fileC;

    cout << "which file do you want to open?";
    cin >> filename;

    fileC.open(filename.c_str());
    fileC << "lalala";
    fileC.close();

    return 0;
}