#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Team {
    string name;
    int points;
};

bool compareByPoints(Team a, Team b) {
    return a.points > b.points;
}

void sortTeams(Team teams[], int n) {
    // Сортируем команды по очкам (пузырьковая сортировка)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (teams[j].points < teams[j + 1].points) {
                swap(teams[j], teams[j + 1]);
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Team teams[20] = {
        {"Спартак", 65}, {"ЦСКА", 70}, {"Зенит", 68}, {"Динамо", 60}, {"Локомотив", 62},
        {"Краснодар", 58}, {"Ростов", 55}, {"Уфа", 45}, {"Крылья Советов", 48}, {"Рубин", 50},
        {"Ахмат", 52}, {"Урал", 40}, {"Арсенал", 42}, {"Сочи", 56}, {"Нижний Новгород", 44},
        {"Химки", 38}, {"Факел", 36}, {"Балтика", 34}, {"Енисей", 32}, {"Томь", 30}
    };

    cout << "Исходный список команд:" << endl;
    cout << "========================" << endl;
    for (int i = 0; i < 20; i++) {
        cout << teams[i].name << ": " << teams[i].points << " очков" << endl;
    }

    // Сортируем команды
    sortTeams(teams, 20);

    cout << "\n\nКоманды в соответствии с занятыми местами:" << endl;
    cout << "==========================================" << endl;
    for (int i = 0; i < 20; i++) {
        cout << i + 1 << " место: " << teams[i].name
            << " (" << teams[i].points << " очков)" << endl;
    }

    return 0;
}