#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int GAMES = 20;
    int games[GAMES];     // двузначные числа: XY - X забито, Y пропущено

    cout << "Введите результаты " << GAMES << " игр:\n";
    cout << "(например: 32 - 3 забито, 2 пропущено; 5 - 0 забито, 5 пропущено)\n";

    for (int i = 0; i < GAMES; i++) {
        cout << "Игра " << i + 1 << ": ";
        cin >> games[i];
    }

    int wins = 0, draws = 0, loses = 0;
    int bigWins = 0;
    int totalScored = 0, totalMissed = 0;

    cout << "\nРезультаты всех игр:\n";
    cout << "Игра | Результат | Забито | Пропущено | Разница\n";
    cout << "-----------------------------------------------\n";

    for (int i = 0; i < GAMES; i++) {
        // Извлекаем цифры из числа
        int scored, missed;

        if (games[i] < 10) {
            // Однозначное число: 0-X
            scored = 0;
            missed = games[i];
        }
        else {
            // Двузначное число: XY
            scored = games[i] / 10;
            missed = games[i] % 10;
        }

        int diff = scored - missed;
        string result;

        if (diff > 0) {
            result = "Выигрыш";
            wins++;
        }
        else if (diff < 0) {
            result = "Проигрыш";
            loses++;
        }
        else {
            result = "Ничья";
            draws++;
        }

        if (diff >= 3) {
            bigWins++;
        }

        totalScored += scored;
        totalMissed += missed;

        printf("%3d  | %9s | %6d | %8d | %+d\n",
            i + 1, result.c_str(), scored, missed, diff);
    }

    // Результаты по пунктам
    cout << "\nа) Результаты всех игр (см. выше)\n";
    cout << "\nб) Количество выигрышей: " << wins << endl;
    cout << "\nв) Выигрышей: " << wins << ", Проигрышей: " << loses << endl;
    cout << "\nг) Выигрышей: " << wins << ", Ничьих: " << draws
        << ", Проигрышей: " << loses << endl;
    cout << "\nд) Игр с разницей >= 3: " << bigWins << endl;

    int points = wins * 3 + draws;
    cout << "\nе) Общее число очков: " << points
        << " (" << wins << "*3 + " << draws << "*1)\n";

    // Дополнительная статистика
    cout << "\nДополнительно:\n";
    cout << "Всего забито: " << totalScored << " мячей\n";
    cout << "Всего пропущено: " << totalMissed << " мячей\n";
    cout << "Разница: " << totalScored - totalMissed << " мячей\n";
    cout << "Среднее за игру: " << (double)totalScored / GAMES << "-"
        << (double)totalMissed / GAMES << endl;

    return 0;
}