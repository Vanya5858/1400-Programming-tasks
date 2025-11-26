#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    for (double x = 0.1; x <= 1.5; x += 0.1) {
        cout << "sin " << x << " = " << sin(x) << endl;
    }
    return 0;
}