#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	int* ptr1 = &num1, * ptr2 = &num2;

	cout << "Enter first number: ";
	cin >> *ptr1;
	cout << "Enter second number: ";
	cin >> *ptr2;
	cout << "Results........\n" << "Addititon: " << *ptr1 + *ptr2 << "\nSubstraciton: " << *ptr1 - *ptr2 << "\nMultiplication: " << *ptr1 * *ptr2 << "\nDivision: " << *ptr1 / *ptr2 << "\nMod: " << *ptr1 % *ptr2;
	return 0;
}

