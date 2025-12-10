#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int GAMES = 20;
    int scored[GAMES], conceded[GAMES];

    cout << "Введите 20 пар чисел (забитые и пропущенные мячи):\n";

    // Ввод данных
    for (int i = 0; i < GAMES; i++) {
        cin >> scored[i] >> conceded[i];
    }

    // а) Словесный результат каждой игры
    cout << "\nа) Результаты каждой игры:\n";
    for (int i = 0; i < GAMES; i++) {
        if (scored[i] > conceded[i])
            cout << i + 1 << ": выигрыш\n";
        else if (scored[i] < conceded[i])
            cout << i + 1 << ": проигрыш\n";
        else
            cout << i + 1 << ": ничья\n";
    }

    // б) Количество выигрышей
    int wins = 0;
    for (int i = 0; i < GAMES; i++) {
        if (scored[i] > conceded[i])
            wins++;
    }
    cout << "\nб) Количество выигрышей: " << wins << endl;

    // в) Количество выигрышей и проигрышей
    int losses = 0;
    for (int i = 0; i < GAMES; i++) {
        if (scored[i] < conceded[i])
            losses++;
    }
    cout << "в) Выигрышей: " << wins << ", проигрышей: " << losses << endl;

    // г) Количество выигрышей, ничьих и проигрышей
    int draws = 0;
    for (int i = 0; i < GAMES; i++) {
        if (scored[i] == conceded[i])
            draws++;
    }
    cout << "г) Выигрышей: " << wins << ", ничьих: " << draws << ", проигрышей: " << losses << endl;

    // д) Количество игр, где забито 3 или больше мячей
    int scored3plus = 0;
    for (int i = 0; i < GAMES; i++) {
        if (scored[i] >= 3)
            scored3plus++;
    }
    cout << "д) Игр с 3+ забитыми мячами: " << scored3plus << endl;

    // е) Общее количество забитых и пропущенных мячей
    int totalScored = 0, totalConceded = 0;
    for (int i = 0; i < GAMES; i++) {
        totalScored += scored[i];
        totalConceded += conceded[i];
    }
    cout << "е) Всего забито: " << totalScored << ", пропущено: " << totalConceded;

    return 0;
}