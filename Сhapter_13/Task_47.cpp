#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Team {
    string name;
    int points;
};

bool compareByPoints(Team a, Team b) {
    return a.points > b.points; // по убыванию очков
}

void printTeams(Team teams[], int n) {
    cout << "Место\tКоманда\t\tОчки" << endl;
    cout << "==========================" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t" << teams[i].name << "\t\t" << teams[i].points << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    // Исходный список (19 команд)
    Team teams[20]; // 19 + 1 новая

    // Заполняем исходные 19 команд
    string teamNames[] = {
        "Спартак", "ЦСКА", "Зенит", "Динамо", "Локомотив",
        "Краснодар", "Ростов", "Сочи", "Нижний Новгород", "Рубин",
        "Уфа", "Арсенал", "Урал", "Ахмат", "Крылья Советов",
        "Химки", "Факел", "Балтика", "Енисей"
    };

    int teamPoints[] = {
        70, 68, 65, 62, 60,
        58, 55, 52, 50, 48,
        46, 44, 42, 40, 38,
        36, 34, 32, 30
    };

    for (int i = 0; i < 19; i++) {
        teams[i].name = teamNames[i];
        teams[i].points = teamPoints[i];
    }

    // Добавляем новую команду
    teams[19].name = "НоваяКоманда";
    teams[19].points = 56; // очки новой команды

    cout << "Исходный список (19 команд):" << endl;
    printTeams(teams, 19);

    // Сортируем весь список (20 команд)
    sort(teams, teams + 20, compareByPoints);

    cout << "\n\nНовый список (20 команд с новой):" << endl;
    printTeams(teams, 20);

    return 0;
}