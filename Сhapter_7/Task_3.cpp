#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double side, perimeter = 0;

    cout << "Введите длины 12 сторон 12-угольника: ";
    for (int i = 0; i < 12; i++) {
        cin >> side;
        perimeter += side;
    }

    cout << "Периметр = " << perimeter;
    return 0;
}