#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int x = 55;
    int y = 75;

    // Эмуляция цикла из блок-схемы
    if (x != y) {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}