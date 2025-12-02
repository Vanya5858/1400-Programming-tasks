#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c, x, y;
    cout << "Введите размеры кирпича (a b c): ";
    cin >> a >> b >> c;
    cout << "Введите размеры отверстия (x y): ";
    cin >> x >> y;

    // Проверяем все возможные ориентации кирпича
    if ((a <= x && b <= y) || (a <= y && b <= x) ||
        (a <= x && c <= y) || (a <= y && c <= x) ||
        (b <= x && c <= y) || (b <= y && c <= x)) {
        cout << "Кирпич пройдет в отверстие\n";
    }
    else {
        cout << "Кирпич не пройдет в отверстие\n";
    }

    return 0;
}