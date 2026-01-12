#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int weights[] = { 100, 200, 300, 500, 1000, 1200, 1400, 1500, 2000, 3000 };
    int count = sizeof(weights) / sizeof(weights[0]);

    int v;
    cout << "Введите вес v (в граммах): ";
    cin >> v;

    cout << "\nГири: ";
    for (int i = 0; i < count; i++) {
        cout << weights[i] << "г ";
    }
    cout << endl;

    // Подсчет способов с помощью полного перебора
    // Каждую гирю можно либо взять (1), либо не взять (0)
    int totalWays = 0;

    cout << "\nСпособы составления веса " << v << "г:" << endl;
    cout << "--------------------------------" << endl;

    // 2^10 = 1024 комбинаций
    for (int mask = 1; mask < (1 << count); mask++) {
        int sum = 0;

        // Вычисляем сумму для текущей комбинации
        for (int i = 0; i < count; i++) {
            if (mask & (1 << i)) {
                sum += weights[i];
            }
        }

        // Если сумма равна целевому весу
        if (sum == v) {
            totalWays++;
            cout << "Способ " << totalWays << ": ";

            bool first = true;
            for (int i = 0; i < count; i++) {
                if (mask & (1 << i)) {
                    if (!first) cout << " + ";
                    cout << weights[i] << "г";
                    first = false;
                }
            }
            cout << " = " << v << "г" << endl;
        }
    }

    if (totalWays == 0) {
        cout << "Невозможно составить вес " << v << "г из данных гирь" << endl;
    }
    else {
        cout << "\nВсего способов: " << totalWays << endl;
    }

    return 0;
}