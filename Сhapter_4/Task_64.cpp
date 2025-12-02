#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, d;
    cout << "Введите размеры форточки (a b) в см: ";
    cin >> a >> b;
    cout << "Введите диаметр головы в см: ";
    cin >> d;

    // Учитываем зазор 1 см с каждой стороны
    if (d + 2 <= a && d + 2 <= b) {
        cout << "Вася сможет высунуть голову\n";
    }
    else {
        cout << "Вася не сможет высунуть голову\n";
    }

    return 0;
}