#include "ArrayFunctionsTN.h"
using namespace std;


void searchInput(int input[], int target, int size) {//returns index of the array where the target number is. If not present, returns -1.
	int foundIndex = -1;
	for (int i = 0; i < size; i++) {
		if (input[i] == target) { //This checks if the input target is found in the array.
			foundIndex = i;
			
		}
	}
	cout << "The index of the number you inputted is: " << foundIndex << "\n"; //This displays the index of the item if found. -1 if not.
}

void modify(int input[], int index, int newValue, int size) { // A function that can modify the value of an integer when called with the index of the integer in the array and return the new value and old value back to the user.
	int oldValue;
	try {
		if (index < size - 1 && index >= 0) {//Verifies the index is valid.
			oldValue = input[index];
			input[index] = newValue;
			cout << "Old Value: " << oldValue << "\n";
			cout << "New Value: " << newValue << "\n";
		}
		else {//Throws an exception if the index isn't valid.
			throw runtime_error("Error: Index Out of Range.");
		}
	}
	catch (runtime_error) {
		cout << "Index out of range. Try again!" << endl;
	}
 }

void append(int input[], int newAddition, int size) { // A function that adds a new integer to the end of the array
	int* temp = new int[size + 1];
	for (int i = 0; i < size - 1; i++) {
		temp[i] = input[i];
	}
	temp[size - 1] = newAddition;
	printArray(temp, size);
	cout << endl;
	delete input;
	//input = temp; this dont work idk why
}

void erase(int input[], int index, int size) { // A function which intakes an index of an array and removes the integer altogether.
	try {
		bool found = false;
		if (index < size - 1 && index >= 0) {//Verifies the index is valid.
			int* temp = new int[size];
			for (int i = 0; i < size; i++) {
				if (i != index && found == false) {
					temp[i] = input[i];
				}
				else {
					found = true;
					temp[i] = input[i + 1];
				}
			}
			printArray(temp, size);
			// input = temp; this dont work idk why
			cout << "Number at " << index << " erased." << endl;
		}
		else {//Throws an exception if the index isn't valid.
			throw runtime_error("Index out of range. Try again");
		}
	}
	catch (runtime_error) {
		cout << "Index out of range. Try again!" << endl;
	}
}

void printArray(int input[], int size) { // used for debugging
	for (int i = 0; i < size; i++) {
		cout << input[i] << ' ';
	}
	cout << endl;
}