#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int ATHLETES = 8;
    const int SPORTS = 5;
    int scores[ATHLETES][SPORTS];

    // Ввод данных
    cout << "Введите баллы:" << endl;
    for (int i = 0; i < ATHLETES; i++) {
        cout << "Спортсмен " << (i + 1) << ": ";
        for (int j = 0; j < SPORTS; j++) {
            cin >> scores[i][j];
        }
    }

    // а) Максимальная из оценок в таблице
    int maxScore = scores[0][0];
    for (int i = 0; i < ATHLETES; i++) {
        for (int j = 0; j < SPORTS; j++) {
            if (scores[i][j] > maxScore) {
                maxScore = scores[i][j];
            }
        }
    }
    cout << "\nа) Максимальная оценка: " << maxScore << endl;

    // б) Сколько баллов набрал победитель соревнований
    int winner = 0;
    int maxTotal = 0;
    for (int i = 0; i < ATHLETES; i++) {
        int total = 0;
        for (int j = 0; j < SPORTS; j++) {
            total += scores[i][j];
        }
        if (total > maxTotal) {
            maxTotal = total;
            winner = i;
        }
    }
    cout << "б) Победитель: спортсмен " << (winner + 1)
        << " с суммой " << maxTotal << " баллов" << endl;

    return 0;
}