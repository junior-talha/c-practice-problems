#include <iostream>
using namespace std;

int main() {
    int n, num, smallest, largest, mid, i = 0;
    cout << "Enter the number of integers: ";
    cin >> n;
    cout << "Enter " << n << " integers: ";
    cin >> num;
    smallest = largest = mid = num;
    while(i < n - 1){
        i++;
        cin >> num;
        if (num < smallest)
            smallest = num;
        else if (num > largest)
            largest = num;
    }
    if (n % 2 == 0) 
        mid = (smallest + largest) / 2;
    cout << "Smallest integer: " << smallest << endl;
    cout << "Largest integer: " << largest << endl;
    cout << "Mid integer: " << mid << endl;

    return 0;
}

