#include <iostream>
using namespace std;

const int SIZE = 5;

int main(){
	double arr[SIZE] = { 23,56.4,123,98,66 };
	double* ptr = arr;
	for (int i = 0; i < SIZE; i++, ptr++) {
		cout << "The number at index " << i << " is: " << * ptr << "\n";
	}
}

