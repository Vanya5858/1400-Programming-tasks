#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    for (double n = 2.0; n <= 12.0; n += 0.5) {
        cout << n << endl;
    }

    return 0;
}