#include "ArrayFunctionsTN.h"

int search(int input[], int target) {
	int foundIndex = 0;
	for (int i = 0; i < sizeof(input); i++) { //This checks if the input target is found in the array.
		if (input[i] == target) {
			foundIndex = i; //This sets the foundIndex to the index of the item if found.
		}
	}
	return input[foundIndex];
}

void modify(int input[], int index) {

}

void append(int input[], int newAddition) {

}

void erase(int input[], int index) {

}