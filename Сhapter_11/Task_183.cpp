#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 30;
    int populations[n];

    cout << "Введите численность населения " << n << " городов:\n";
    for (int i = 0; i < n; i++) {
        cin >> populations[i];
    }

    cout << "\nИсходные данные: ";
    for (int i = 0; i < n; i++) cout << populations[i] << " ";
    cout << endl;

    // Проверяем, нарушает ли последний элемент упорядоченность
    // (для возрастания - каждый следующий должен быть больше предыдущего)
    bool needsSorting = false;
    for (int i = 0; i < n - 1; i++) {
        if (populations[i] > populations[n - 1]) {
            needsSorting = true;
            break;
        }
    }

    if (needsSorting) {
        // Сортируем по возрастанию
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (populations[j] > populations[j + 1]) {
                    int temp = populations[j];
                    populations[j] = populations[j + 1];
                    populations[j + 1] = temp;
                }
            }
        }

        cout << "\nМассив после упорядочивания (по возрастанию): ";
        for (int i = 0; i < n; i++) cout << populations[i] << " ";
        cout << endl;
    }
    else {
        cout << "\nПоследний элемент не нарушает упорядоченность.\n";
    }

    return 0;
}