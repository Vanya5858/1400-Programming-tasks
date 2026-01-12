#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 15;
    int heights[n];

    cout << "Введите рост " << n << " юношей в порядке убывания:\n";
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    cout << "\nВыберите вариант:\n";
    cout << "1. Известен номер нового ученика\n";
    cout << "2. Известен рост нового ученика\n";

    int choice;
    cin >> choice;

    int newHeights[n + 1];

    if (choice == 1) {
        int position;
        cout << "Введите номер для нового ученика (1-" << n + 1 << "): ";
        cin >> position;

        if (position >= 1 && position <= n + 1) {
            int newHeight;
            cout << "Введите рост нового ученика: ";
            cin >> newHeight;

            // Вставляем в указанную позицию
            for (int i = 0; i < position - 1; i++) {
                newHeights[i] = heights[i];
            }
            newHeights[position - 1] = newHeight;
            for (int i = position; i < n + 1; i++) {
                newHeights[i] = heights[i - 1];
            }

            // Сортируем по убыванию (пузырьковая сортировка)
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n - i; j++) {
                    if (newHeights[j] < newHeights[j + 1]) {
                        int temp = newHeights[j];
                        newHeights[j] = newHeights[j + 1];
                        newHeights[j + 1] = temp;
                    }
                }
            }

            cout << "Новый массив ростов: ";
            for (int i = 0; i < n + 1; i++) cout << newHeights[i] << " ";
            cout << endl;
        }
    }
    else if (choice == 2) {
        int newHeight;
        cout << "Введите рост нового ученика: ";
        cin >> newHeight;

        // Находим позицию для вставки (чтобы сохранить убывание)
        int position = n;  // По умолчанию в конец
        for (int i = 0; i < n; i++) {
            if (newHeight > heights[i]) {
                position = i;
                break;
            }
        }

        // Вставляем
        for (int i = 0; i < position; i++) {
            newHeights[i] = heights[i];
        }
        newHeights[position] = newHeight;
        for (int i = position + 1; i < n + 1; i++) {
            newHeights[i] = heights[i - 1];
        }

        cout << "Новый массив ростов: ";
        for (int i = 0; i < n + 1; i++) cout << newHeights[i] << " ";
        cout << endl;
    }

    return 0;
}