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
    cout << "1. Известны номера выбывших учеников\n";
    cout << "2. Известны росты выбывших учеников\n";

    int choice;
    cin >> choice;

    int newHeights[n - 2];

    if (choice == 1) {
        int num1, num2;
        cout << "Введите номера выбывших учеников (1-" << n << "): ";
        cin >> num1 >> num2;

        if (num1 >= 1 && num1 <= n && num2 >= 1 && num2 <= n && num1 != num2) {
            int index = 0;
            for (int i = 0; i < n; i++) {
                if (i != num1 - 1 && i != num2 - 1) {
                    newHeights[index++] = heights[i];
                }
            }

            cout << "Роста оставшихся учеников: ";
            for (int i = 0; i < n - 2; i++) cout << newHeights[i] << " ";
            cout << endl;
        }
        else {
            cout << "Неверные номера!\n";
        }
    }
    else if (choice == 2) {
        int height1, height2;
        cout << "Введите росты выбывших учеников: ";
        cin >> height1 >> height2;

        int index = 0;
        bool found1 = false, found2 = false;

        for (int i = 0; i < n; i++) {
            if ((heights[i] == height1 && !found1) || (heights[i] == height2 && !found2)) {
                if (heights[i] == height1) found1 = true;
                if (heights[i] == height2) found2 = true;
                continue;
            }
            newHeights[index++] = heights[i];
        }

        if (found1 && found2) {
            cout << "Роста оставшихся учеников: ";
            for (int i = 0; i < n - 2; i++) cout << newHeights[i] << " ";
            cout << endl;
        }
        else {
            cout << "Не все ученики найдены!\n";
        }
    }

    return 0;
}