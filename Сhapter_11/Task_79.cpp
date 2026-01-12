#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    int results[n];

    cout << "Введите результаты 20 игр (3 - выигрыш, 1 - ничья, 2 - проигрыш):\n";
    for (int i = 0; i < n; i++) cin >> results[i];

    int wins = 0, draws = 0, losses = 0;
    for (int i = 0; i < n; i++) {
        if (results[i] == 3) wins++;
        else if (results[i] == 1) draws++;
        else if (results[i] == 2) losses++;
    }

    cout << "Выигрышей: " << wins << ", ничьих: " << draws << ", проигрышей: " << losses << endl;
    return 0;
}