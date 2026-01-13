#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a = 6;
    int s = 0;

    // Цикл из блок-схемы: пока a != 2
    while (a != 2) {
        s = s + a;
        a = a - 1;
    }

    cout << "s = " << s << endl;
    cout << "a = " << a << endl;

    return 0;
}