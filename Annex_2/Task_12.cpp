#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a = 56;
    int b = 77;

    // Эмуляция цикла из блок-схемы
    if (a != b) {
        if (a > b) {
            b = b - a;
        }
        else {
            a = a - b;
        }
    }

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}