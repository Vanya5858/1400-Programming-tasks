#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // а) целочисленное деление
    int quotient = 0;
    int temp = b;
    while (temp >= a) {
        temp -= a;
        quotient++;
    }
    cout << quotient << endl;

    // б) остаток
    cout << temp << endl;

    return 0;
}