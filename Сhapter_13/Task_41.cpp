#include <iostream>
#include <string>
using namespace std;

struct Match {
    int goalsScored;    // забитые мячи
    int goalsConceded;  // пропущенные мячи
};

void analyzeMatches(Match matches[], int n) {
    int wins = 0, draws = 0, losses = 0;
    int totalPoints = 0;

    cout << "а) Результаты матчей:" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Матч " << i + 1 << ": " << matches[i].goalsScored
            << ":" << matches[i].goalsConceded << " - ";

        if (matches[i].goalsScored > matches[i].goalsConceded) {
            cout << "выигрыш";
            wins++;
            totalPoints += 3;
        }
        else if (matches[i].goalsScored == matches[i].goalsConceded) {
            cout << "ничья";
            draws++;
            totalPoints += 1;
        }
        else {
            cout << "проигрыш";
            losses++;
        }
        cout << endl;
    }

    cout << "\nб) Количество выигрышей: " << wins << endl;
    cout << "в) Количество выигрышей и проигрышей: " << wins << " и " << losses << endl;
    cout << "г) Выигрыши/ничьи/проигрыши: " << wins << "/" << draws << "/" << losses << endl;
    cout << "д) Общее число очков: " << totalPoints << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    Match matches[22] = {
        {2, 1}, {1, 1}, {0, 2}, {3, 1}, {2, 2},
        {1, 0}, {0, 1}, {2, 0}, {1, 1}, {3, 2},
        {0, 0}, {2, 1}, {1, 3}, {2, 2}, {1, 0},
        {0, 2}, {3, 1}, {1, 1}, {2, 0}, {0, 3},
        {1, 0}, {2, 1}
    };

    analyzeMatches(matches, 22);

    return 0;
}