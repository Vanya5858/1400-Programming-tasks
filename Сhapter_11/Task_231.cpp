#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int GAMES = 20;
    int scored[GAMES];    // забитые мячи
    int missed[GAMES];    // пропущенные мячи

    cout << "Введите результаты " << GAMES << " игр:\n";
    for (int i = 0; i < GAMES; i++) {
        cout << "Игра " << i + 1 << ":\n";
        cout << "  Забито: ";
        cin >> scored[i];
        cout << "  Пропущено: ";
        cin >> missed[i];
    }

    // Способ 1: Без дополнительного массива
    cout << "\n=== Способ 1 (без доп. массива) ===\n";
    cout << "Игра | Забито | Пропущено | Результат\n";
    cout << "-------------------------------------\n";

    int wins1 = 0, draws1 = 0, loses1 = 0;
    for (int i = 0; i < GAMES; i++) {
        string result;
        if (scored[i] > missed[i]) {
            result = "Выигрыш";
            wins1++;
        }
        else if (scored[i] < missed[i]) {
            result = "Проигрыш";
            loses1++;
        }
        else {
            result = "Ничья";
            draws1++;
        }

        printf("%3d  | %6d | %8d | %s\n",
            i + 1, scored[i], missed[i], result.c_str());
    }
    cout << "Итого: " << wins1 << " выигрышей, " << draws1
        << " ничьих, " << loses1 << " проигрышей\n";

    // Способ 2: С дополнительным массивом
    cout << "\n=== Способ 2 (с доп. массивом) ===\n";
    cout << "Игра | Забито | Пропущено | Результат | Разница\n";
    cout << "-----------------------------------------------\n";

    int results[GAMES];  // 1 - выигрыш, 0 - ничья, -1 - проигрыш
    int diff[GAMES];     // разница мячей

    int wins2 = 0, draws2 = 0, loses2 = 0;
    for (int i = 0; i < GAMES; i++) {
        diff[i] = scored[i] - missed[i];

        if (diff[i] > 0) {
            results[i] = 1;
            wins2++;
        }
        else if (diff[i] < 0) {
            results[i] = -1;
            loses2++;
        }
        else {
            results[i] = 0;
            draws2++;
        }

        string result;
        if (results[i] == 1) result = "Выигрыш";
        else if (results[i] == -1) result = "Проигрыш";
        else result = "Ничья";

        printf("%3d  | %6d | %8d | %9s | %+d\n",
            i + 1, scored[i], missed[i], result.c_str(), diff[i]);
    }

    cout << "\nИтого: " << wins2 << " выигрышей, " << draws2
        << " ничьих, " << loses2 << " проигрышей\n";

    // Подсчет очков (3 за выигрыш, 1 за ничью)
    int points = wins2 * 3 + draws2;
    cout << "Очков набрано: " << points << "\n";

    return 0;
}