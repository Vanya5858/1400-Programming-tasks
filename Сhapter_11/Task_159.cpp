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

    cout << "\nИсходные роста: ";
    for (int i = 0; i < n; i++) cout << heights[i] << " ";
    cout << endl;

    int newHeights[n - 1];

    cout << "\nВыберите вариант:\n";
    cout << "1. Известен но***************мер выбывшего ученика\n";
    cout << "2. Известен рост выбывшего ученика\n";
    int choice;
    cin >> choice;

    if (choice == 1) {
        int num;
        cout << "Введите номер выбывшего ученика (1-" << n << "): ";
        cin >> num;

        if (num >= 1 && num <= n) {
            int index = 0;
            for (int i = 0; i < n; i++) {
                if (i != num - 1) {
                    newHeights[index++] = heights[i];
                }
            }

            cout << "Роста оставшихся учеников: ";
            for (int i = 0; i < n - 1; i++) cout << newHeights[i] << " ";
            cout << endl;
        }
    }
    else if (choice == 2) {
        int height;
        cout << "Введите рост выбывшего ученика: ";
        cin >> height;

        int index = 0;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (heights[i] == height && !found) {
                found = true;
                continue;
            }
            newHeights[index++] = heights[i];
        }

        if (found) {
            cout << "Роста оставшихся учеников: ";
            for (int i = 0; i < n - 1; i++) cout << newHeights[i] << " ";
            cout << endl;
        }
        else {
            cout << "Ученика с таким ростом не найдено!\n";
        }
    }

    return 0;
}