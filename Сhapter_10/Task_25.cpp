#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    int variant;
    cout << "Выберите вариант (1-белая пешка, 2-чёрная пешка, 3-конь): ";
    cin >> variant;

    int a, b, c, d;
    bool found = false;

    if (variant == 1) { // Белая пешка
        cout << "а) Белая пешка (движется снизу вверх)" << endl;
        int moveType;
        cout << "Выберите тип хода (1-обычный, 2-взятие): ";
        cin >> moveType;

        do {
            a = rand() % 8 + 1;
            b = rand() % 8 + 1;
            c = rand() % 8 + 1;
            d = rand() % 8 + 1;

            if (moveType == 1) { // Обычный ход
                // Белая пешка ходит вперёд на 1 клетку
                found = (c == a && d == b + 1);
                // Или с начальной позиции на 2 клетки
                if (!found && b == 2) {
                    found = (c == a && d == b + 2);
                }
            }
            else { // Взятие
                // Белая пешка бьёт по диагонали вперёд
                found = (d == b + 1 && abs(c - a) == 1);
            }

        } while (!found);

        cout << "Белая пешка с (" << a << "," << b << ") может пойти на (" << c << "," << d << ")" << endl;

    }
    else if (variant == 2) { // Чёрная пешка
        cout << "б) Чёрная пешка (движется сверху вниз)" << endl;
        int moveType;
        cout << "Выберите тип хода (1-обычный, 2-взятие): ";
        cin >> moveType;

        do {
            a = rand() % 8 + 1;
            b = rand() % 8 + 1;
            c = rand() % 8 + 1;
            d = rand() % 8 + 1;

            if (moveType == 1) { // Обычный ход
                // Чёрная пешка ходит вниз на 1 клетку
                found = (c == a && d == b - 1);
                // Или с начальной позиции на 2 клетки
                if (!found && b == 7) {
                    found = (c == a && d == b - 2);
                }
            }
            else { // Взятие
                // Чёрная пешка бьёт по диагонали вниз
                found = (d == b - 1 && abs(c - a) == 1);
            }

        } while (!found);

        cout << "Чёрная пешка с (" << a << "," << b << ") может пойти на (" << c << "," << d << ")" << endl;

    }
    else if (variant == 3) { // Конь
        cout << "в) Конь" << endl;

        do {
            a = rand() % 8 + 1;
            b = rand() % 8 + 1;
            c = rand() % 8 + 1;
            d = rand() % 8 + 1;

            // Конь угрожает, если разница 2 и 1 или 1 и 2
            int dx = abs(a - c);
            int dy = abs(b - d);
            found = ((dx == 2 && dy == 1) || (dx == 1 && dy == 2));

        } while (!found);

        cout << "Конь с (" << a << "," << b << ") угрожает полю (" << c << "," << d << ")" << endl;
    }

    return 0;
}