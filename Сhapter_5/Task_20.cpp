#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (double i = 0.1; i < 1.0; i += 0.1) {
        cout << "sqrt(" << i << ") = " << sqrt(i) << endl;
    }
    return 0;
}