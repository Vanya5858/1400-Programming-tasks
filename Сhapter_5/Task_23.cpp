#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    for (double i = 2.1; i <= 2.9; i += 0.1) {
        cout << i << endl;
    }
    return 0;
}