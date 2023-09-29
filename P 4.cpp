#include <iostream>
using namespace std;

const int SIZE = 5;

int main() {
    int arr[SIZE] = { 3,9,1,15,3 };
    int* ptr = arr;
 
    for (int i = 0; i < SIZE; i++) {
        cout << "The address and value of array at index " << i << " is: " << ptr << " and " << *ptr << endl;
        ptr++;
    }
    ptr = arr;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = i+1; j < SIZE; ++j) {
            if (*(ptr + i) == *(ptr + j)) {
                cout << "Values at index " << i << " and " << j << " are equal!\n";
            }
        }
    }
}

