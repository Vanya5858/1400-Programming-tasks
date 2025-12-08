#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int points, games;
    int wins = 0, draws = 0, losses = 0;

    cout << "Введите количество проведённых игр: ";
    cin >> games;
    cout << "Введите очки, полученные в каждой игре (3, 1 или 0): ";

    for (int i = 0; i < games; i++) {
        cin >> points;
        switch (points) {
        case 3: wins++; break;
        case 1: draws++; break;
        case 0: losses++; break;
        }
    }

    cout << "\nРезультаты:\n";
    cout << "Выигрышей: " << wins << endl;
    cout << "Ничьих: " << draws << endl;
    cout << "Проигрышей: " << losses;

    return 0;
}