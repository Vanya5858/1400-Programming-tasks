#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    for (int x = 4; x <= 28; x++) {
        double t = x + 3;
        double y = 3 * t * t + 4.87 * t - 3;
        cout << "x = " << x << ", y = " << y << endl;
    }
    return 0;
}