#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int TOTAL_MONEY = 100;    // 100 рублей
    const int TOTAL_ANIMALS = 100;  // 100 голов
    const int BULL_PRICE = 10;      // бык - 10 руб
    const int COW_PRICE = 5;        // корова - 5 руб
    const int CALF_PRICE = 0.5;     // теленок - 0.5 руб (полтинник)

    cout << "Цены: бык - " << BULL_PRICE << " руб, корова - " << COW_PRICE
        << " руб, теленок - " << CALF_PRICE << " руб" << endl;
    cout << "Надо купить 100 голов скота на 100 рублей" << endl;

    cout << "\nВозможные решения:" << endl;
    cout << "Быков\tКоров\tТелят\tСтоимость\tГолов" << endl;
    cout << "------------------------------------------------" << endl;

    int solutions = 0;

    // Перебираем количество быков
    for (int bulls = 0; bulls <= TOTAL_MONEY / BULL_PRICE; bulls++) {
        // Перебираем количество коров
        for (int cows = 0; cows <= (TOTAL_MONEY - bulls * BULL_PRICE) / COW_PRICE; cows++) {
            // Количество телят вычисляем из условий
            int calves = TOTAL_ANIMALS - bulls - cows;

            if (calves >= 0) {
                // Проверяем стоимость
                double cost = bulls * BULL_PRICE + cows * COW_PRICE + calves * CALF_PRICE;

                // Сравниваем с точностью до 0.01 (копейки)
                if (abs(cost - TOTAL_MONEY) < 0.01) {
                    solutions++;
                    cout << bulls << "\t" << cows << "\t" << calves << "\t"
                        << cost << " руб.\t" << (bulls + cows + calves) << endl;

                    // Проверка
                    cout << "  Проверка: " << bulls << "*10 + " << cows << "*5 + "
                        << calves << "*0.5 = " << cost << endl;
                }
            }
        }
    }

    cout << "\nВсего решений: " << solutions << endl;
    return 0;
}