using namespace std;
#include <algorithm>
#include <iostream>
#include <chrono>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>

//func prototypes
void printArray(int A[], int size);

//global variables


int main() {
	//get size
	int size;
	cout << "Size: ";
	cin >> size;

	//seed random
	srand(time(NULL));

	//make random array
	int* A = new int[size];
	for (int i = 0; i < size; i++) {
		//random number from -3*SIZE to 3*SIZE
		A[i] = rand() % (-3 * size) + (3 * size);
	}

	printArray(A, size);
}

void printArray(int A[], int size) {
	cout << "[ ";
	for (int i = 0; i < size; i++) {
		cout << to_string(A[i]) + ", ";
	}
	cout << " ]";
}
