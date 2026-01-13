#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a = 256;
    int b = 0;

    // Цикл из блок-схемы: пока a != 1
    while (a != 1) {
        a = a / 2;
        b = b + a + 1;
    }

    cout << "b = " << b << endl;
    cout << "a = " << a << endl;

    return 0;
}