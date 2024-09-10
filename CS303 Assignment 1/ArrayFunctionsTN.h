#pragma once
#include <iostream>
#include <stdexcept>
#include <array>

void searchInput(int input[], int target, int size);

void modify(int input[], int index, int newValue, int size);

void append(int input[], int newAddition, int size);

void erase(int input[], int index, int size);

void printArray(int input[], int size);