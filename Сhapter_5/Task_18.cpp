#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    for (int a = 2; a <= 17; a++) {
        double t = 3 * a;
        double z = 4.3 * t * t - 8 * t + 13;
        cout << "a = " << a << ", z = " << z << endl;
    }
    return 0;
}