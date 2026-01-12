#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int MATCHES = 15;
    int scored[MATCHES];    // забитые мячи
    int missed[MATCHES];    // пропущенные мячи

    cout << "Введите результаты " << MATCHES << " матчей:\n";
    for (int i = 0; i < MATCHES; i++) {
        cout << "Матч " << i + 1 << ":\n";
        cout << "  Забито: ";
        cin >> scored[i];
        cout << "  Пропущено: ";
        cin >> missed[i];
    }

    // Способ 1: Без дополнительного массива
    cout << "\n=== Способ 1 (без доп. массива) ===\n";
    cout << "Матч | Забито | Пропущено | Результат\n";
    cout << "-------------------------------------\n";

    int wins1 = 0, loses1 = 0;
    for (int i = 0; i < MATCHES; i++) {
        string result = (scored[i] > missed[i]) ? "Выигрыш" : "Проигрыш";
        if (scored[i] > missed[i]) wins1++;
        else loses1++;

        printf("%3d  | %6d | %8d | %s\n",
            i + 1, scored[i], missed[i], result.c_str());
    }
    cout << "Итого: " << wins1 << " выигрышей, " << loses1 << " проигрышей\n";

    // Способ 2: С дополнительным массивом
    cout << "\n=== Способ 2 (с доп. массивом) ===\n";
    cout << "Матч | Забито | Пропущено | Результат | Разница\n";
    cout << "-----------------------------------------------\n";

    int results[MATCHES];  // 1 - выигрыш, 0 - проигрыш
    int diff[MATCHES];     // разница мячей

    int wins2 = 0, loses2 = 0;
    for (int i = 0; i < MATCHES; i++) {
        diff[i] = scored[i] - missed[i];
        results[i] = (diff[i] > 0) ? 1 : 0;

        if (results[i] == 1) wins2++;
        else loses2++;

        string result = (results[i] == 1) ? "Выигрыш" : "Проигрыш";
        printf("%3d  | %6d | %8d | %9s | %+d\n",
            i + 1, scored[i], missed[i], result.c_str(), diff[i]);
    }

    cout << "\nИтого: " << wins2 << " выигрышей, " << loses2 << " проигрышей\n";

    // Статистика
    if (wins2 > loses2) {
        cout << "Команда выиграла больше матчей\n";
    }
    else if (loses2 > wins2) {
        cout << "Команда проиграла больше матчей\n";
    }
    else {
        cout << "Поровну выигрышей и проигрышей\n";
    }

    return 0;
}