#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 25;
    double results[n];

    cout << "Введите результаты " << n << " спортсменов (время в секундах):\n";
    for (int i = 0; i < n; i++) {
        cin >> results[i];
    }

    cout << "\nИсходные результаты: ";
    for (int i = 0; i < n; i++) cout << results[i] << " ";
    cout << endl;

    // Проверяем, нарушает ли первый элемент упорядоченность
    // (для ухудшения результата - время должно увеличиваться)
    bool needsSorting = false;
    for (int i = 1; i < n; i++) {
        if (results[i] < results[0]) {
            needsSorting = true;
            break;
        }
    }

    if (needsSorting) {
        // Сортируем по возрастанию (ухудшение результата = больше время)
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (results[j] > results[j + 1]) {
                    double temp = results[j];
                    results[j] = results[j + 1];
                    results[j + 1] = temp;
                }
            }
        }

        cout << "\nМассив после упорядочивания (по ухудшению результата): ";
        for (int i = 0; i < n; i++) cout << results[i] << " ";
        cout << endl;
    }
    else {
        cout << "\nПервый элемент не нарушает упорядоченность.\n";
    }

    return 0;
}