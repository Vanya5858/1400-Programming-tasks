#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double num = 1.0;
    while (num <= 13.5) {
        cout << num << endl;
        num += 0.5;
    }

    return 0;
}