#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int DAYS = 31;
    int precipitation[DAYS];

    // Ввод данных об осадках
    cout << "Введите количество осадков (в мм) за каждый день января:" << endl;
    for (int i = 0; i < DAYS; i++) {
        cout << "День " << i + 1 << ": ";
        cin >> precipitation[i];
    }

    cout << "\nДни без осадков:" << endl;

    bool noRain = false;
    for (int i = 0; i < DAYS; i++) {
        if (precipitation[i] == 0) {
            cout << i + 1 << " января ";
            noRain = true;
        }
    }

    if (!noRain) {
        cout << "Без осадков дней не было" << endl;
    }
    else {
        cout << endl;
    }

    return 0;
}