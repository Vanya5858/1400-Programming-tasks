#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m;
    cout << "Введите количество чисел m: ";
    cin >> m;

    int minLength = m + 1; // Инициализируем большим значением
    int currentLength = 0;

    cout << "Введите " << m << " чисел (0 или 1): ";
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;

        if (num == 0) {
            currentLength++;
        }
        else {
            if (currentLength > 0 && currentLength < minLength) {
                minLength = currentLength;
            }
            currentLength = 0;
        }
    }

    // Проверяем последний отрезок
    if (currentLength > 0 && currentLength < minLength) {
        minLength = currentLength;
    }

    if (minLength == m + 1) {
        cout << "Отрезков из нулей нет\n";
    }
    else {
        cout << "Наименьшая длина отрезка из нулей: " << minLength << endl;
    }

    return 0;
}