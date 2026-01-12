#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 20;
    int arr[SIZE];

    cout << "Введите " << SIZE << " целых чисел (ровно два из них одинаковые):\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Поиск одинаковых элементов
    int duplicate = -1;
    bool found = false;

    for (int i = 0; i < SIZE && !found; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[i] == arr[j]) {
                duplicate = arr[i];
                found = true;

                // Выводим информацию о найденных элементах
                cout << "\nНайдены одинаковые элементы!\n";
                cout << "Значение: " << duplicate << endl;
                cout << "Позиции в массиве: " << i + 1 << " и " << j + 1 << endl;

                // Показываем весь массив с подсветкой одинаковых элементов
                cout << "\nВесь массив:\n";
                for (int k = 0; k < SIZE; k++) {
                    if (k == i || k == j) {
                        cout << "[" << arr[k] << "] ";
                    }
                    else {
                        cout << arr[k] << " ";
                    }
                }
                cout << endl;

                break;
            }
        }
    }

    if (!found) {
        cout << "\nОшибка! В массиве нет двух одинаковых элементов.\n";
        cout << "Проверьте ввод данных.\n";
    }

    return 0;
}