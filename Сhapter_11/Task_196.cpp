#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 24;
    int grades[SIZE] = { 5, 5, 5, 5, 4, 4, 4, 3, 3, 4,
                        4, 5, 5, 4, 3, 2, 4, 5, 4, 3,
                        5, 5, 4, 4 };

    cout << "Оценки по геометрии: ";
    for (int i = 0; i < SIZE; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;

    // Считаем пятерки в начале
    int countFives = 0;
    for (int i = 0; i < SIZE; i++) {
        // Без if: увеличиваем счетчик, пока идут пятерки
        int isFiveAtStart = (grades[i] == 5) && (countFives == i);
        countFives += isFiveAtStart;
    }

    cout << "Количество учеников с оценкой '5': " << countFives << endl;

    return 0;
}