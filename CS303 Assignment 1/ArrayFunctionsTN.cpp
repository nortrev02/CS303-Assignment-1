#include "ArrayFunctionsTN.h"
using namespace std;

void searchInput(int input[], int target) {//returns index of the array where the target number is. If not present, returns -1.
	int foundIndex = -1;
	for (int i = 0; i < sizeof(input); i++) { 
		if (input[i] == target) { //This checks if the input target is found in the array.
			foundIndex = i;
			
		}
	}
	cout << foundIndex << "\n"; //This displays the index of the item if found. -1 if not.
}

void modify(int input[], int index, int newValue) { // A function that can modify the value of an integer when called with the index of the integer in the array and return the new value and old value back to the user.
	int oldValue;
	if (index < sizeof(input) - 1) {//Verifies the index is valid.
		oldValue = input[index];
		input[index] = newValue;
		cout << "Old Value: " << oldValue << "\n";
		cout << "New Value: " << newValue << "\n";
	}
	else {//Throws an exception if the index isn't valid.
		//throw
	}
 }

void append(int input[], int newAddition) { // A function that adds a new integer to the end of the array
	int newArray[sizeof(input) + 1];
	for (int i = 0; i < sizeof(input); i++) {
		newArray[i] = input[i];
	}
	newArray[sizeof(input)] = newAddition;
	input = newArray;
}

void erase(int input[], int index) { // A function which intakes an index of an array and removes the integer altogether.
	int newArray[sizeof(input) - 1];
	if (index < sizeof(input) - 1) {//Verifies the index is valid.
		for (int i = 0; i < sizeof(input); i++) {
			if (i != index) {
				newArray[i] = input[i]; // TODO fix the new array assignment after index is found.
			}
		}
		input = newArray;
	}
	else {//Throws an exception if the index isn't valid.
		//throw
	}
}

void printArray(int input[]) { // used for debugging
	for (int i = 0; i < sizeof(input); i++) {
		cout << input[i] << ' ';
	}
}