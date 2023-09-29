#include <iostream>
using namespace std;

double double_fibo(double n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        double third = 0, sec = 1;
        for (int i = 2; i <= n; ++i) {
            double first = sec;
            sec = third + sec;
            third = first;
        }
        return sec;
    }
}

int main() {
    double n;
    cout << "Enter the value of n: ";
    cin >> n;
    double result = double_fibo(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}

