#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int digits = 0;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    for (int i = digits - 1; i >= 0; i--) {
        int divisor = pow(10, i);
        cout << (n / divisor) % 10 << endl;
    }

    return 0;
}