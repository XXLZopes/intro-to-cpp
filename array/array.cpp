#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main () {
    string tests[2] = {"test1", "test2"};

    int size = *(&tests + 1) - tests;
    cout << size;
    return 0;
}




