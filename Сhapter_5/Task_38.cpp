#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 2.0;
    double sum = 0;
    double power = x;  // x^1

    for (int i = 1; i <= 11; i += 2) {
        sum += power / i;
        power = power * x * x;  // увеличиваем степень на 2
    }

    cout << "x + x^3/3 + x^5/5 + ... + x^11/11 = " << sum << endl;

    return 0;
}