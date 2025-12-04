#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int points;
    cout << "Введите количество очков (0, 1 или 3): ";
    cin >> points;

    if (points == 3) {
        cout << "Выигрыш\n";
    }
    else if (points == 1) {
        cout << "Ничья\n";
    }
    else if (points == 0) {
        cout << "Проигрыш\n";
    }
    else {
        cout << "Некорректное количество очков\n";
    }

    return 0;
}