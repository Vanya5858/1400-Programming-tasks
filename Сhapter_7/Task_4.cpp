#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double mass, total = 0;
    int count;

    cout << "Введите количество предметов: ";
    cin >> count;
    cout << "Введите массу каждого предмета: ";

    for (int i = 0; i < count; i++) {
        cin >> mass;
        total += mass;
    }

    cout << "Общая масса = " << total;
    return 0;
}