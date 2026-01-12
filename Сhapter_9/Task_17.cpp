#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int PRODUCTS = 5;
    const int DAYS = 6;
    int price[PRODUCTS];          
    int quantity[PRODUCTS][DAYS]; 

    // Ввод стоимости товаров
    cout << "Введите стоимость одной штуки для каждого товара:" << endl;
    for (int i = 0; i < PRODUCTS; i++) {
        cout << "Товар " << (i + 1) << ": ";
        cin >> price[i];
    }

    // Ввод количества проданных
    cout << "\nВведите количество проданных товаров за 6 дней:" << endl;
    for (int i = 0; i < PRODUCTS; i++) {
        cout << "Товар " << (i + 1) << " (6 дней): ";
        for (int j = 0; j < DAYS; j++) {
            cin >> quantity[i][j];
        }
    }

    // а) Общий доход, полученный от продажи каждого вида товара
    cout << "\nа) Общий доход по товарам:" << endl;
    int productIncome[PRODUCTS] = { 0 };
    for (int i = 0; i < PRODUCTS; i++) {
        for (int j = 0; j < DAYS; j++) {
            productIncome[i] += price[i] * quantity[i][j];
        }
        cout << "Товар " << (i + 1) << ": " << productIncome[i] << " руб." << endl;
    }

    // б) Общий доход, полученный за каждый день
    cout << "\nб) Общий доход по дням:" << endl;
    for (int j = 0; j < DAYS; j++) {
        int dayIncome = 0;
        for (int i = 0; i < PRODUCTS; i++) {
            dayIncome += price[i] * quantity[i][j];
        }
        cout << "День " << (j + 1) << ": " << dayIncome << " руб." << endl;
    }

    // в) Общий доход магазина за 6 дней
    int totalIncome = 0;
    for (int i = 0; i < PRODUCTS; i++) {
        totalIncome += productIncome[i];
    }
    cout << "\nв) Общий доход за 6 дней: " << totalIncome << " руб." << endl;

    // г) По какому виду товара был получен максимальный общий доход за 6 дней
    int maxProduct = 0;
    int maxProductIncome = productIncome[0];
    for (int i = 1; i < PRODUCTS; i++) {
        if (productIncome[i] > maxProductIncome) {
            maxProductIncome = productIncome[i];
            maxProduct = i;
        }
    }
    cout << "г) Самый доходный товар: №" << (maxProduct + 1)
        << " (" << maxProductIncome << " руб.)" << endl;

    // д) В какой день был получен максимальный общий доход от продажи всех видов товара
    int maxDay = 0;
    int maxDayIncome = 0;
    for (int j = 0; j < DAYS; j++) {
        int dayIncome = 0;
        for (int i = 0; i < PRODUCTS; i++) {
            dayIncome += price[i] * quantity[i][j];
        }
        if (dayIncome > maxDayIncome) {
            maxDayIncome = dayIncome;
            maxDay = j;
        }
    }
    cout << "д) Самый доходный день: " << (maxDay + 1)
        << " (" << maxDayIncome << " руб.)" << endl;

    // е) Количество дней, в которые общий доход от продажи всех видов товара превысил a рублей
    int a;
    cout << "\nВведите значение a: ";
    cin >> a;

    int goodDays = 0;
    for (int j = 0; j < DAYS; j++) {
        int dayIncome = 0;
        for (int i = 0; i < PRODUCTS; i++) {
            dayIncome += price[i] * quantity[i][j];
        }
        if (dayIncome > a) {
            goodDays++;
        }
    }
    cout << "е) Дней с доходом > " << a << " руб.: " << goodDays << endl;

    return 0;
}