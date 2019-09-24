#include <iostream>
using namespace std;


int main() {
	
	int size;
	int *array;
	cin >> size;
	
	array = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}

	for (int a = 0; a < size - 1; a++) {
		for (int b = 0; b < size - a - 1; b++) {
			if (array[b] > array[b + 1]) {
				array[b + 1] = array[b + 1] xor array[b];
				array[b] = array[b + 1] xor array[b];
				array[b + 1] = array[b + 1] xor array[b];
			}
		}
	}
	cout << "a";
	return 0;
}
