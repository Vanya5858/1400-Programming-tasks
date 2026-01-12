#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int GAMES = 20;
    int scored[GAMES];    // забитые мячи
    int missed[GAMES];    // пропущенные мячи

    cout << "Введите результаты " << GAMES << " игр (однозначные числа):\n";
    for (int i = 0; i < GAMES; i++) {
        cout << "Игра " << i + 1 << ":\n";
        cout << "  Забито (0-9): ";
        cin >> scored[i];
        cout << "  Пропущено (0-9): ";
        cin >> missed[i];
    }

    // Массив для хранения результатов
    int results[GAMES];  // 1 - выигрыш, 0 - ничья, -1 - проигрыш
    int diff[GAMES];     // разница мячей

    int wins = 0, draws = 0, loses = 0;
    int bigWins = 0;     // игры с разницей >= 3

    for (int i = 0; i < GAMES; i++) {
        diff[i] = scored[i] - missed[i];

        // Определяем результат игры
        if (diff[i] > 0) {
            results[i] = 1;
            wins++;
        }
        else if (diff[i] < 0) {
            results[i] = -1;
            loses++;
        }
        else {
            results[i] = 0;
            draws++;
        }

        // Считаем игры с разницей >= 3
        if (diff[i] >= 3) {
            bigWins++;
        }
    }

    // а) Результаты всех игр
    cout << "\nа) Результаты всех игр:\n";
    cout << "Игра | Забито | Пропущено | Результат | Разница\n";
    cout << "------------------------------------------------\n";
    for (int i = 0; i < GAMES; i++) {
        string result;
        if (results[i] == 1) result = "Выигрыш";
        else if (results[i] == -1) result = "Проигрыш";
        else result = "Ничья";

        printf("%3d  | %6d | %8d | %9s | %+d\n",
            i + 1, scored[i], missed[i], result.c_str(), diff[i]);
    }

    // б) Количество выигрышей
    cout << "\nб) Количество выигрышей: " << wins << endl;

    // в) Количество выигрышей и проигрышей
    cout << "\nв) Выигрышей: " << wins << ", Проигрышей: " << loses << endl;

    // г) Все три категории
    cout << "\nг) Выигрышей: " << wins << ", Ничьих: " << draws
        << ", Проигрышей: " << loses << endl;

    // д) Игры с разницей >= 3
    cout << "\nд) Игр с разницей >= 3: " << bigWins << endl;

    // е) Общее число очков
    int points = wins * 3 + draws;
    cout << "\nе) Общее число очков: " << points
        << " (" << wins << "*3 + " << draws << "*1)\n";

    // Дополнительная статистика
    cout << "\nДополнительная статистика:\n";
    cout << "Всего забито мячей: ";
    int totalScored = 0, totalMissed = 0;
    for (int i = 0; i < GAMES; i++) {
        totalScored += scored[i];
        totalMissed += missed[i];
    }
    cout << totalScored << endl;
    cout << "Всего пропущено мячей: " << totalMissed << endl;
    cout << "Разница мячей: " << totalScored - totalMissed << endl;
    cout << "Среднее за игру: " << (double)totalScored / GAMES << "-"
        << (double)totalMissed / GAMES << endl;

    return 0;
}