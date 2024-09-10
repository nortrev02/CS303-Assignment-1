#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include "ArrayFunctionsTN.h"
using namespace std;


int main()
{
    ifstream inputFile("A1input.txt");
    int inputArray[100]{};
    int size = 100;
    int inputCount = 0;
    while (inputFile.is_open()) { // This while loop fills the array with the input values.
        string inputString = "";
        inputFile >> inputString;
        inputArray[inputCount] = stoi(inputString);
        inputString = "";
        inputCount++;
        if (inputFile.eof()) {
            break;
        }
    }
    inputFile.close();
    char choice;
    bool running = true; // runs the while loop
    while (running) {// main loop the user interacts with
        int target = 0, index = 0;
        cout << "\nEnter your selection below:\n";
        cout << "S to search the array.\n";
        cout << "M to modify the array.\n";
        cout << "A to add a number to the end of the array.\n";
        cout << "E to erase a number from the array.\n";
        cout << "Q to quit.\n";
        cin >> choice;
        choice = toupper(choice);
        switch (choice) {
        case 'S':
            cout << "Enter the number you are looking for in the array.\n";
            cin >> target; // target here is the number being searched for
            searchInput(inputArray, target, size);
            break;
        case 'M':
            cout << "Enter the index you would like to replace: " << endl;
            cin >> index;
            cout << "Enter the number you would like to use: " << endl;
            cin >> target; // target here is the new value that will replace the old one
            modify(inputArray, index, target, size);
            break;
        case 'A':
            cout << "Enter the number you would like to add to the end of the array: " << endl;
            cin >> target;// target here is the new addition to the end of the array
            size++;
            append(inputArray, target, size);
            break;
        case 'E':
            cout << "Enter the index of the value you would like to be erased: " << endl;
            cin >> index; //target here is the index that is to be erased.
            size--;
            erase(inputArray, index, size);
            break;
        case 'Q':
            cout << "Bye Bye Boy!" << endl;
            running = false;
            break;
        default:
            cout << "Input not valid. Try again.\n";
            break;
        }
        printArray(inputArray, size);
    }
}