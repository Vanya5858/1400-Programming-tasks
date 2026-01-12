#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    const int SIZE = 20;
    int arr[SIZE];

    // Заполняем массив неповторяющимися числами
    for (int i = 0; i < SIZE; i++) {
        bool unique;
        do {
            arr[i] = rand() % 100 + 1; // числа от 1 до 100
            unique = true;

            // Проверяем, не встречалось ли это число ранее
            for (int j = 0; j < i; j++) {
                if (arr[j] == arr[i]) {
                    unique = false;
                    break;
                }
            }
        } while (!unique);
    }

    // Выводим массив
    cout << "Массив из 20 неповторяющихся чисел:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }

    // Проверка на уникальность
    cout << "\nПроверка уникальности..." << endl;
    bool allUnique = true;
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[i] == arr[j]) {
                cout << "Ошибка: повтор числа " << arr[i] << endl;
                allUnique = false;
            }
        }
    }

    if (allUnique) {
        cout << "Все числа уникальны!" << endl;
    }

    return 0;
}