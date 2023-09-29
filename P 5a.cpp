#include <iostream>
using namespace std;

int int_fibo(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        int third = 0, sec = 1;
        for (int i = 2; i <= n; ++i) {
            int first = sec;
            sec = third + sec;
            third = first;
        }
        return sec;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int result = int_fibo(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}
