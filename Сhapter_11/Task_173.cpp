#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 25;
    int heights[n];

    cout << "Введите рост " << n << " учеников в порядке убывания:\n";
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    cout << "\nВыберите вариант:\n";
    cout << "1. Известны номера новых учеников\n";
    cout << "2. Известны росты новых учеников\n";

    int choice;
    cin >> choice;

    int newHeights[n + 2];

    if (choice == 1) {
        int pos1, pos2;
        cout << "Введите номера для новых учеников (1-" << n + 2 << "): ";
        cin >> pos1 >> pos2;

        if (pos1 >= 1 && pos1 <= n + 2 && pos2 >= 1 && pos2 <= n + 2 && pos1 != pos2) {
            int height1, height2;
            cout << "Введите рост первого нового ученика: ";
            cin >> height1;
            cout << "Введите рост второго нового ученика: ";
            cin >> height2;

            // Вставляем первого ученика
            int temp[n + 1];
            for (int i = 0; i < pos1 - 1; i++) temp[i] = heights[i];
            temp[pos1 - 1] = height1;
            for (int i = pos1; i < n + 1; i++) temp[i] = heights[i - 1];

            // Вставляем второго ученика
            if (pos2 > pos1) pos2--;  // Корректируем позицию после первой вставки

            for (int i = 0; i < pos2 - 1; i++) newHeights[i] = temp[i];
            newHeights[pos2 - 1] = height2;
            for (int i = pos2; i < n + 2; i++) newHeights[i] = temp[i - 1];

            // Сортируем по убыванию
            for (int i = 0; i < n + 1; i++) {
                for (int j = 0; j < n + 1 - i; j++) {
                    if (newHeights[j] < newHeights[j + 1]) {
                        int t = newHeights[j];
                        newHeights[j] = newHeights[j + 1];
                        newHeights[j + 1] = t;
                    }
                }
            }

            cout << "Новый массив ростов: ";
            for (int i = 0; i < n + 2; i++) cout << newHeights[i] << " ";
            cout << endl;
        }
    }
    else if (choice == 2) {
        int height1, height2;
        cout << "Введите рост первого нового ученика: ";
        cin >> height1;
        cout << "Введите рост второго нового ученика: ";
        cin >> height2;

        // Вставляем и сортируем
        for (int i = 0; i < n; i++) newHeights[i] = heights[i];
        newHeights[n] = height1;
        newHeights[n + 1] = height2;

        // Сортируем по убыванию
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < n + 1 - i; j++) {
                if (newHeights[j] < newHeights[j + 1]) {
                    int t = newHeights[j];
                    newHeights[j] = newHeights[j + 1];
                    newHeights[j + 1] = t;
                }
            }
        }

        cout << "Новый массив ростов: ";
        for (int i = 0; i < n + 2; i++) cout << newHeights[i] << " ";
        cout << endl;
    }

    return 0;
}