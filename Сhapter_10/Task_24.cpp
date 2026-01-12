#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    int variant;
    cout << "Выберите фигуру (1-ладья, 2-слон, 3-король, 4-ферзь): ";
    cin >> variant;

    int a, b, c, d;
    bool found = false;

    do {
        a = rand() % 8 + 1; 
        b = rand() % 8 + 1;
        c = rand() % 8 + 1;
        d = rand() % 8 + 1;

        if (variant == 1) { // Ладья
            // Ладья не угрожает, если не на одной линии
            found = (a != c && b != d);
        }
        else if (variant == 2) { // Слон
            // Слон не угрожает, если не на одной диагонали
            found = (abs(a - c) != abs(b - d));
        }
        else if (variant == 3) { // Король
            // Король может пойти, если расстояние 1 клетка
            found = (abs(a - c) <= 1 && abs(b - d) <= 1 &&
                !(a == c && b == d));
        }
        else if (variant == 4) { // Ферзь
            // Ферзь не угрожает, если не на линии и не на диагонали
            found = (a != c && b != d && abs(a - c) != abs(b - d));
        }

    } while (!found);

    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << endl;
    cout << "Поле (" << a << "," << b << ") и поле (" << c << "," << d << ")" << endl;

    string figure;
    if (variant == 1) figure = "ладья";
    else if (variant == 2) figure = "слон";
    else if (variant == 3) figure = "король";
    else figure = "ферзь";

    cout << "На поле (" << a << "," << b << ") расположен " << figure << endl;
    cout << "Условие задачи выполнено!" << endl;

    return 0;
}