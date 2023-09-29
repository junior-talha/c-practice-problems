#include <iostream>

using namespace std;

int main() {
    int num1 = 5, num2 = 15;
    int* p1, * p2;
    // p1 = address of firstvalue
    p1 = &num1;   
    // p2 = address of secondvalue
    p2 = &num2;  
    // value pointed by p1 = 10
    *p1 = 10;           
    // value pointed by p2 = value pointed by p1
    *p2 = *p1;         
    // p1 = p2 (address of pointer is copied)
    p1 = p2;            
    // value pointed by p1 = 20
    *p1 = 20;          
    // Print firstvalue
    cout << "firstvalue: " << num1 << endl;   
    // Print secondvalue
    cout << "secondvalue: " << num2 << endl; 

    return 0;
}

