#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 30;
    int speeds[n];

    cout << "Введите максимальные скорости " << n << " моделей автомобилей:\n";
    for (int i = 0; i < n; i++) {
        cin >> speeds[i];
    }

    cout << "\nИсходные данные: ";
    for (int i = 0; i < n; i++) cout << speeds[i] << " ";
    cout << endl;

    int k;
    cout << "\nВведите номер элемента k, который нарушает упорядоченность (1-" << n << "): ";
    cin >> k;

    if (k >= 1 && k <= n) {
        // Извлекаем k-й элемент
        int element = speeds[k - 1];

        // Удаляем его из массива (сдвигаем остальные)
        for (int i = k - 1; i < n - 1; i++) {
            speeds[i] = speeds[i + 1];
        }

        // Ищем правильную позицию для вставки (массив отсортирован по возрастанию)
        int insertPos = n - 1; // По умолчанию в конец

        for (int i = 0; i < n - 1; i++) {
            if (element < speeds[i]) {
                insertPos = i;
                break;
            }
        }

        // Сдвигаем элементы для вставки
        for (int i = n - 1; i > insertPos; i--) {
            speeds[i] = speeds[i - 1];
        }

        // Вставляем элемент на правильное место
        speeds[insertPos] = element;

        cout << "\nМассив после упорядочивания: ";
        for (int i = 0; i < n; i++) cout << speeds[i] << " ";
        cout << endl;
    }
    else {
        cout << "Неверный номер элемента!\n";
    }

    return 0;
}