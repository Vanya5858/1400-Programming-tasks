#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int firstDigit;
    int temp = n;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

    int count = 0;
    temp = n;
    while (temp > 0) {
        if (temp % 10 == firstDigit) {
            count++;
        }
        temp /= 10;
    }

    cout << count << endl;
    return 0;
}