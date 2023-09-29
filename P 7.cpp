#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

void add(double num1, double num2) {
    double result = num1 + num2;
    cout << "Result of Addition: " << result << endl;
}

void subtract(double num1, double num2) {
    double result = num1 - num2;
    cout << "Result of Subtraction: " << result << endl;
}

void multiply(double num1, double num2) {
    double result = num1 * num2;
    cout << "Result of Multiplication: " << result << endl;
}

void divide(double num1, double num2) {
    if (num2 != 0) {
        double result = num1 / num2;
        cout << "Result of Division: " << result << endl;
    }
    else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}

void squareRoot(double num) {
    if (num >= 0) {
        double result = sqrt(num);
        cout << "Result of Square Root: " << result << endl;
    }
    else {
        cout << "Error: Square root of a negative number is not allowed." << endl;
    }
}

void modulus(double num1, double num2) {
    if (num2 != 0) {
        double result = fmod(num1, num2);
        cout << "Result of Modulus: " << result << endl;
    }
    else {
        cout << "Error: Modulus with divisor as zero is not allowed." << endl;
    }
}

void storeResultInFile(const string& operation, double result) {
    ofstream outFile("results.txt", ios::app); 
    if (outFile.is_open()) {
        outFile << "Operation: " << operation << ", Result: " << result << endl;
        outFile.close();
        cout << "Result stored in results.txt" << endl;
    }
    else {
        cout << "Error: Unable to store result in file." << endl;
    }
}

int main() {
    int op;
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Available operations:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Square root (only first num sq root will be calculated)" << endl;
    cout << "6. Modulus" << endl;

    cout << "Enter operation choice (1-6): ";
    cin >> op;

    switch (op) {
    case 1:
        add(num1, num2);
        storeResultInFile("Addition", num1 + num2);
        break;
    case 2:
        subtract(num1, num2);
        storeResultInFile("Subtraction", num1 - num2);
        break;
    case 3:
        multiply(num1, num2);
        storeResultInFile("Multiplication", num1 * num2);
        break;
    case 4:
        divide(num1, num2);
        storeResultInFile("Division", num1 / num2);
        break;
    case 5:
        squareRoot(num1);
        if (num1 >= 0) {
            storeResultInFile("Square Root", sqrt(num1));
        }
        break;
    case 6:
        modulus(num1, num2);
        if (num2 != 0) {
            storeResultInFile("Modulus", fmod(num1, num2));
        }
        break;
    default:
        cout << "Invalid operation choice." << endl;
    }
    return 0;
}

