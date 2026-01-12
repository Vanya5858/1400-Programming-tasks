#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int ATHLETES = 15;
    const int PROGRAMS = 3;
    double scores[ATHLETES][PROGRAMS];

    // Ввод данных
    cout << "Введите баллы (через пробел для каждой программы):" << endl;
    for (int i = 0; i < ATHLETES; i++) {
        cout << "Спортсмен " << (i + 1) << ": ";
        for (int j = 0; j < PROGRAMS; j++) {
            cin >> scores[i][j];
        }
    }

    cout << fixed << setprecision(2);

    // а) Среднее количество баллов каждого спортсмена
    cout << "\nа) Средний балл каждого спортсмена:" << endl;
    for (int i = 0; i < ATHLETES; i++) {
        double athleteAvg = 0;
        for (int j = 0; j < PROGRAMS; j++) {
            athleteAvg += scores[i][j];
        }
        athleteAvg /= PROGRAMS;
        cout << "Спортсмен " << (i + 1) << ": " << athleteAvg << endl;
    }

    // б) Среднее количество баллов по каждому виду программы
    cout << "\nб) Средний балл по видам программ:" << endl;
    string programNames[] = { "Обязательная", "Короткая", "Произвольная" };
    for (int j = 0; j < PROGRAMS; j++) {
        double programAvg = 0;
        for (int i = 0; i < ATHLETES; i++) {
            programAvg += scores[i][j];
        }
        programAvg /= ATHLETES;
        cout << programNames[j] << ": " << programAvg << endl;
    }

    return 0;
}