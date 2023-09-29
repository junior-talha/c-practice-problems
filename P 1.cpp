#include <iostream>
using namespace std;

int main() {
    int a = 100, b = 105, c = 30;
    string day, weather;
    bool d = true;
    bool exp1 = (a > b) || ((c < d) && (a == c * 3));
    if (exp1)
        cout << "Condition 1 is TRUE" << endl;
    else
        cout << "Condition 1 is FALSE" << endl;
    bool exp2 = (a > b) && ((a < c) || (c == 10));
    if (exp2)
        cout << "Condition 2 is TRUE" << endl;
    else
        cout << "Condition 2 is FALSE" << endl;
    bool exp3 = (a <= b - 2) && (b >= c) || (c - 2 != 20);
    if (exp3)
        cout << "Condition 3 is TRUE" << endl;
    else
        cout << "Condition 3 is FALSE" << endl;
    bool exp4 = a <= 5 || b < 15;
    if (exp4)
        cout << "Condition 4 is TRUE" << endl;
    else
        cout << "Condition 4 is FALSE" << endl;
    cout << "Enter a day of the week: ";
    cin >> day;
    cout << "Enter weather: ";
    cin >> weather;
    bool exp5 = ((day == "Saturday") || (day == "Sunday")) && (weather == "Sunny");
    if (exp5)
        cout << "Condition 5 is TRUE" << endl;
    else
        cout << "Condition 5 is FALSE" << endl;

    return 0;
}

