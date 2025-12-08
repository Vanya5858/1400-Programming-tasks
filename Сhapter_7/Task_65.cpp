#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int wins, losses, countMoreWins = 0;
    int teams;

    cout << "Введите количество команд: ";
    cin >> teams;
    cout << "Введите количество выигрышей и проигрышей для каждой команды:\n";

    for (int i = 0; i < teams; i++) {
        cin >> wins >> losses;
        if (wins > losses)
            countMoreWins++;
    }

    cout << "Команд больше выигрышей, чем проигрышей: " << countMoreWins;
    return 0;
}