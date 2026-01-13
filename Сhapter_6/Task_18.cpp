#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 10, b = 5;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int i = a;
    do {
        cout << sqrt(i) << endl;
        i--;
    } while (i >= b);

    return 0;
}