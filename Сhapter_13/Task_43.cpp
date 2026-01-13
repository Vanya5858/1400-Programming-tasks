#include <iostream>
#include <string>
using namespace std;

struct Team {
    string name;
    int points;
};

void analyzeNewTeam(Team teams[], int n, int newTeamPoints) {
    // а) Определить место новой команды
    cout << "а) Команда набрала " << newTeamPoints << " очков и заняла ";

    // Без условного оператора
    int position = n + 1; // начинаем с последнего места

    for (int i = 0; i < n; i++) {
        // Увеличиваем позицию на 1 за каждую команду с меньшим количеством очков
        position -= (teams[i].points > newTeamPoints);
    }

    cout << position << "-е место" << endl;

    // б) Команды, набравшие меньше очков
    cout << "б) Команды, набравшие меньше очков:" << endl;

    for (int i = 0; i < n; i++) {
        // Без if: используем арифметику
        bool condition = (teams[i].points < newTeamPoints);
        cout << string(condition, '\0') << (condition ? teams[i].name + "\n" : "");
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    // Команды упорядочены по убыванию очков
    Team teams[19] = {
        {"Спартак", 70}, {"ЦСКА", 68}, {"Зенит", 65}, {"Динамо", 62},
        {"Локомотив", 60}, {"Краснодар", 58}, {"Ростов", 55},
        {"Сочи", 52}, {"Нижний Новгород", 50}, {"Рубин", 48},
        {"Уфа", 46}, {"Арсенал", 44}, {"Урал", 42}, {"Ахмат", 40},
        {"Крылья Советов", 38}, {"Химки", 36}, {"Факел", 34},
        {"Балтика", 32}, {"Енисей", 30}
    };

    int newTeamPoints = 56; // очки новой команды

    cout << "Двадцатая команда набрала " << newTeamPoints << " очков" << endl;
    cout << "============================================" << endl;

    analyzeNewTeam(teams, 19, newTeamPoints);

    return 0;
}