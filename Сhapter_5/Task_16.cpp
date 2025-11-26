#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    for (int i = 2; i <= 15; i++) {
        cout << "sin " << i << " = " << sin(i) << endl;
    }
    return 0;
}