#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int points, prev;
    bool isDecreasing = true;
    int teams;

    cout << "Введите количество футбольных команд: ";
    cin >> teams;

    if (teams < 2) {
        cout << "Нужно минимум 2 команды";
        return 0;
    }

    cout << "Введите сумму очков каждой команды: ";
    cin >> prev;

    for (int i = 1; i < teams; i++) {
        cin >> points;

        if (points > prev) {
            isDecreasing = false;
        }

        prev = points;
    }

    cout << (isDecreasing ? "Команды перечислены в соответствии с занятыми местами" :
        "Команды не перечислены в соответствии с занятыми местами");
    return 0;
}