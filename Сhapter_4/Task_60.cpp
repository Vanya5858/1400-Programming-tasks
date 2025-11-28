#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double h1, h2, h3;
    cout << "Введите рост трех человек: ";
    cin >> h1 >> h2 >> h3;

    if (h1 == h2 && h2 == h3) {
        cout << "Рост всех трех человек одинаковый\n";
    }
    else {
        cout << "Рост не одинаковый\n";
    }

    return 0;
}