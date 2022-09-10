#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;


int main() 
{
    string in_txt;
    ifstream read_stream("aidan.txt");

    getline(read_stream, in_txt);

    cout << in_txt;

    read_stream.close();

    return 0;
}
