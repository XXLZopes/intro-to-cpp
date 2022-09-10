#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string new_file;

    //Create and open a file
    ofstream MyFile("new_file.txt");

    MyFile << "Hello World!" << endl;
    MyFile << "This is the first time I have written to a file in C++!";

    MyFile.close();

    ifstream testFile("new_file.txt");

    testFile >> new_file;

    cout << new_file;

    return 0;
}