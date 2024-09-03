#include <iostream>
#include <fstream>
#include <string>
#include "ArrayFunctionsTN.h"
using namespace std;


int main()
{
    ifstream inputFile("A1input.txt");
    string inputString = "";
    int inputArray[100];
    int inputCount = 0;
    while (inputFile.is_open()) { // This while loop fills the array with the input values.
        inputFile >> inputString;
        cout << inputString;
        inputArray[inputCount] = stoi(inputString);
        inputString = "";
        inputCount++;
        if (inputFile.eof()) {
            break;
        }
    }
}