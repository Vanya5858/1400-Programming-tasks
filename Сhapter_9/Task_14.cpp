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

    // а) Какой из магазинов получил максимальный общий доход за 10 дней
    int bestShop = 0;
    int maxShopTotal = 0;
    for (int i = 0; i < SHOPS; i++) {
        int shopTotal = 0;
        for (int j = 0; j < DAYS; j++) {
            shopTotal += income[i][j];
        }
        if (shopTotal > maxShopTotal) {
            maxShopTotal = shopTotal;
            bestShop = i;
        }
    }
    cout << "\nа) Лучший магазин: №" << (bestShop + 1)
        << " (общий доход: " << maxShopTotal << ")" << endl;

    // б) Какого числа фирма получила максимальный общий доход
    int bestDay = 0;
    int maxDayTotal = 0;
    for (int j = 0; j < DAYS; j++) {
        int dayTotal = 0;
        for (int i = 0; i < SHOPS; i++) {
            dayTotal += income[i][j];
        }
        if (dayTotal > maxDayTotal) {
            maxDayTotal = dayTotal;
            bestDay = j;
        }
    }
    cout << "б) Лучший день: " << (bestDay + 1)
        << " (общий доход: " << maxDayTotal << ")" << endl;

    // в) Какой магазин и какого числа получил максимальный доход за день
    int maxIncome = income[0][0];
    int maxShopDay = 0, maxDayShop = 0;
    for (int i = 0; i < SHOPS; i++) {
        for (int j = 0; j < DAYS; j++) {
            if (income[i][j] > maxIncome) {
                maxIncome = income[i][j];
                maxShopDay = i;
                maxDayShop = j;
            }
        }
    }
    cout << "в) Максимальный дневной доход: магазин " << (maxShopDay + 1)
        << ", день " << (maxDayShop + 1)
        << " (" << maxIncome << ")" << endl;

    return 0;
}