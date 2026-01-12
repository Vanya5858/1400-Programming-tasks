#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SHOPS = 3;
    const int DAYS = 10;
    int income[SHOPS][DAYS];

    // Ввод данных
    cout << "Введите доход (в тыс. руб.):" << endl;
    for (int i = 0; i < SHOPS; i++) {
        cout << "Магазин " << (i + 1) << " (10 дней): ";
        for (int j = 0; j < DAYS; j++) {
            cin >> income[i][j];
        }
    }

    // а) Для каждого магазина - какого числа этот магазин получил максимальный доход
    cout << "\nа) День с максимальным доходом для каждого магазина:" << endl;
    for (int i = 0; i < SHOPS; i++) {
        int maxDay = 0;
        int maxValue = income[i][0];
        for (int j = 1; j < DAYS; j++) {
            if (income[i][j] > maxValue) {
                maxValue = income[i][j];
                maxDay = j;
            }
        }
        cout << "Магазин " << (i + 1) << ": день " << (maxDay + 1)
            << " (" << maxValue << ")" << endl;
    }

    // б) Для каждого из 10 дней - какой магазин получил в этот день максимальный доход
    cout << "\nб) Лучший магазин каждого дня:" << endl;
    for (int j = 0; j < DAYS; j++) {
        int bestShop = 0;
        int maxValue = income[0][j];
        for (int i = 1; i < SHOPS; i++) {
            if (income[i][j] > maxValue) {
                maxValue = income[i][j];
                bestShop = i;
            }
        }
        cout << "День " << (j + 1) << ": магазин " << (bestShop + 1)
            << " (" << maxValue << ")" << endl;
    }

    return 0;
}