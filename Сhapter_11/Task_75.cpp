#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    int results[n];

    cout << "Введите результаты 20 игр (3 - выигрыш, 1 - ничья, 0 - проигрыш):\n";
    for (int i = 0; i < n; i++) cin >> results[i];

    int wins = 0, draws = 0;
    for (int i = 0; i < n; i++) {
        if (results[i] == 3) wins++;
        else if (results[i] == 1) draws++;
    }

    cout << "Выигрышей: " << wins << ", ничьих: " << draws << endl;
    return 0;
}