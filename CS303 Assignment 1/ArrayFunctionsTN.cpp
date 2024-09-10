#include "ArrayFunctionsTN.h"
using namespace std;

int search(int input[], int target) {//returns index of the array where the target number is. If not present, returns -1.
	int foundIndex = -1;
	for (int i = 0; i < sizeof(input); i++) { //This checks if the input target is found in the array.
		if (input[i] == target) {
			foundIndex = i; //This sets the foundIndex to the index of the item if found.
		}
	}
	return foundIndex;
}

void modify(int input[], int index, int newValue) {
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

void append(int input[], int newAddition) {
	int newArray[sizeof(input) + 1];
	for (int i = 0; i < sizeof(input); i++) {
		newArray[i] = input[i];
	}
	newArray[sizeof(input)] = newAddition;
	input = newArray;
}

void erase(int input[], int index) {
	int newArray[sizeof(input) - 1];
	if (index < sizeof(input) - 1) {//Verifies the index is valid.
		for (int i = 0; i < sizeof(input); i++) {
			if (i != index) {
				newArray[i] = input[i];
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