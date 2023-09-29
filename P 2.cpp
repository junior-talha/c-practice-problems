#include <iostream>
using namespace std;

int main() {
    int prevReading, currReading;
    double units, bill;
    cout << "Enter previous reading: ";
    cin >> prevReading;
    cout << "Enter current reading: ";
    cin >> currReading;
    units = currReading - prevReading;
    if (units <= 100) 
        bill = units * 9.5;
    else if (units > 100 && units <= 300) {
        bill = (100 * 9.5) + ((units - 100) * 10.5);
        bill += bill * 0.3;
    }
    else {
        bill = (100 * 9.5) + (200 * 10.5) + ((units - 300) * 15);
        bill += bill * 0.4;
    }
    cout << "Units consumed: " << units << endl;
    cout << "Electricity bill: Rs. " << bill << endl;
    return 0;
}

