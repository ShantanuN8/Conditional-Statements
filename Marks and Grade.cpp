#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, sum;
    cout << "Enter the marks of sub 1: ";
    cin >> a;
    cout << "Enter the marks of sub 2: ";
    cin >> b;
    cout << "Enter the marks of sub 3: ";
    cin >> c;
    cout << "Enter the marks of sub 4: ";
    cin >> d;

    sum = (a + b + c + d) / 4;

    if (sum >= 90) {
        cout << "O grade";
    } else if (sum >= 85) {
        cout << "A+ grade";
    } else if (sum >= 75) {
        cout << "A grade";
    } else if (sum >= 55) {
        cout << "B grade";
    } else if (sum >= 40) {
        cout << "C grade";
    } else {
        cout << "F grade";
    }

    return 0;
}
/*OUTPUT
Enter the marks of sub 1: 73
Enter the marks of sub 2: 84
Enter the marks of sub 3: 65
Enter the marks of sub 4: 86
A grade
*/
