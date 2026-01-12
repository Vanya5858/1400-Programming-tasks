#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 22;
    int domino[SIZE];

    cout << "Введите " << SIZE << " чисел (0-66) - обозначения костей домино:\n";
    for (int i = 0; i < SIZE; i++) {
        do {
            cout << "Кость " << i + 1 << ": ";
            cin >> domino[i];
            if (domino[i] < 0 || domino[i] > 66) {
                cout << "Число должно быть от 0 до 66!\n";
            }
        } while (domino[i] < 0 || domino[i] > 66);
    }

    // Вариант А: последняя цифра = правая половина
    cout << "\n=== ВАРИАНТ А (последняя цифра = правая половина) ===\n";
    bool validA = true;

    for (int i = 0; i < SIZE - 1; i++) {
        int rightCurrent = domino[i] % 10;  // Правая половина текущей кости
        int leftNext = domino[i + 1] / 10;  // Левая половина следующей кости

        if (rightCurrent != leftNext) {
            cout << "Ошибка на позиции " << i + 1 << "->" << i + 2 << ":\n";
            cout << "Правая половина кости " << domino[i] << " (" << rightCurrent
                << ") не совпадает с левой половиной кости " << domino[i + 1]
                << " (" << leftNext << ")\n";
            validA = false;
            break;
        }
    }

    if (validA) {
        cout << "Последовательность соответствует правилам домино!\n";
        cout << "Выложенный ряд: ";
        for (int i = 0; i < SIZE; i++) {
            cout << domino[i] / 10 << "-" << domino[i] % 10;
            if (i < SIZE - 1) cout << " → ";
        }
        cout << endl;
    }
    else {
        cout << "Последовательность НЕ соответствует правилам домино.\n";
    }

    // Вариант Б: любая цифра может быть правой или левой
    cout << "\n=== ВАРИАНТ Б (любая цифра может быть правой/левой) ===\n";
    bool validB = true;

    for (int i = 0; i < SIZE - 1; i++) {
        int num1 = domino[i];
        int num2 = domino[i + 1];

        int digit1_1 = num1 / 10;  // Первая цифра первой кости
        int digit1_2 = num1 % 10;  // Вторая цифра первой кости
        int digit2_1 = num2 / 10;  // Первая цифра второй кости
        int digit2_2 = num2 % 10;  // Вторая цифра второй кости

        // Проверяем все возможные комбинации
        if (digit1_1 != digit2_1 && digit1_1 != digit2_2 &&
            digit1_2 != digit2_1 && digit1_2 != digit2_2) {
            cout << "Ошибка на позиции " << i + 1 << "->" << i + 2 << ":\n";
            cout << "Кость " << domino[i] << " (" << digit1_1 << "," << digit1_2
                << ") не стыкуется с костью " << domino[i + 1]
                << " (" << digit2_1 << "," << digit2_2 << ")\n";
            validB = false;
            break;
        }
    }

    if (validB) {
        cout << "Последовательность соответствует правилам домино!\n";
    }
    else {
        cout << "Последовательность НЕ соответствует правилам домино.\n";
    }

    return 0;
}