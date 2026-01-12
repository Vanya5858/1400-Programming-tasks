#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int GAMES = 26;
    int championship1[GAMES], championship2[GAMES];

    cout << "Введите количество забитых мячей в первом чемпионате (26 игр):\n";
    for (int i = 0; i < GAMES; i++) {
        cout << "Игра " << i + 1 << ": ";
        cin >> championship1[i];
    }

    cout << "\nВведите количество забитых мячей во втором чемпионате (26 игр):\n";
    for (int i = 0; i < GAMES; i++) {
        cout << "Игра " << i + 1 << ": ";
        cin >> championship2[i];
    }

    // Расчеты
    int total1 = 0, total2 = 0, totalAll = 0;
    int maxGame1 = 0, maxGame2 = 0;
    int bestGame1 = 0, bestGame2 = 0;

    for (int i = 0; i < GAMES; i++) {
        total1 += championship1[i];
        total2 += championship2[i];

        if (championship1[i] > maxGame1) {
            maxGame1 = championship1[i];
            bestGame1 = i + 1;
        }

        if (championship2[i] > maxGame2) {
            maxGame2 = championship2[i];
            bestGame2 = i + 1;
        }
    }

    totalAll = total1 + total2;

    // Вывод результатов
    cout << "\n===================================\n";
    cout << "РЕЗУЛЬТАТЫ КОМАНДЫ ЗА ДВА ЧЕМПИОНАТА\n";
    cout << "===================================\n\n";

    cout << "ПЕРВЫЙ ЧЕМПИОНАТ:\n";
    cout << "Всего забито мячей: " << total1 << endl;
    cout << "Среднее за игру: " << (double)total1 / GAMES << endl;
    cout << "Лучшая игра: игра " << bestGame1 << " (" << maxGame1 << " мячей)\n\n";

    cout << "ВТОРОЙ ЧЕМПИОНАТ:\n";
    cout << "Всего забито мячей: " << total2 << endl;
    cout << "Среднее за игру: " << (double)total2 / GAMES << endl;
    cout << "Лучшая игра: игра " << bestGame2 << " (" << maxGame2 << " мячей)\n\n";

    cout << "ОБЩИЕ ИТОГИ ЗА ДВА ЧЕМПИОНАТА:\n";
    cout << "Всего игр: " << GAMES * 2 << endl;
    cout << "Всего забито мячей: " << totalAll << endl;
    cout << "Среднее за игру: " << (double)totalAll / (GAMES * 2) << endl;

    // Сравнение чемпионатов
    cout << "\nСРАВНЕНИЕ ЧЕМПИОНАТОВ:\n";
    if (total1 > total2) {
        cout << "В первом чемпионате команда забила на " << total1 - total2
            << " мячей больше\n";
    }
    else if (total2 > total1) {
        cout << "Во втором чемпионате команда забила на " << total2 - total1
            << " мячей больше\n";
    }
    else {
        cout << "В обоих чемпионатах команда забила одинаковое количество мячей\n";
    }

    return 0;
}