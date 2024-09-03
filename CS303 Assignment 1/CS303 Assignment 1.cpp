#include <iostream>
#include <fstream>
#include <string>
#include "ArrayFunctionsTN.h"
using namespace std;


int main()
{
    ifstream inputFile("A1input.txt");
    string inputString = "";
    int inputCount = 0;
    while (inputFile.is_open()) {
        inputFile >> inputString;
        inputCount++;
        cout << inputCount;
    }
    cout << "Hello World!\n";
}