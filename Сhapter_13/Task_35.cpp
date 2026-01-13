#include <iostream>
#include <string>
using namespace std;

struct Team {
    string name;
    int points;
};

void findTopTeams(Team teams[], int n) {
    // а) Чемпион
    Team champion = teams[0];
    for (int i = 1; i < n; i++) {
        if (teams[i].points > champion.points) {
            champion = teams[i];
        }
    }

    cout << "а) Чемпион: " << champion.name << " (" << champion.points << " очков)" << endl;

    // б) Второе и третье места
    Team second = { "", -1 };
    Team third = { "", -1 };

    for (int i = 0; i < n; i++) {
        if (teams[i].name != champion.name) {
            if (teams[i].points > second.points) {
                third = second;
                second = teams[i];
            }
            else if (teams[i].points > third.points) {
                third = teams[i];
            }
        }
    }

    cout << "б) Второе место: " << second.name << " (" << second.points << " очков)" << endl;
    cout << "   Третье место: " << third.name << " (" << third.points << " очков)" << endl;

    // в) Первое и второе места без двух проходов
    Team firstTemp = teams[0];
    Team secondTemp = { "", -1 };

    for (int i = 1; i < n; i++) {
        if (teams[i].points > firstTemp.points) {
            secondTemp = firstTemp;
            firstTemp = teams[i];
        }
        else if (teams[i].points > secondTemp.points) {
            secondTemp = teams[i];
        }
    }

    cout << "в) Первое место: " << firstTemp.name << " (" << firstTemp.points << " очков)" << endl;
    cout << "   Второе место: " << secondTemp.name << " (" << secondTemp.points << " очков)" << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    Team teams[20] = {
        {"Спартак", 65}, {"ЦСКА", 70}, {"Зенит", 68}, {"Динамо", 60}, {"Локомотив", 62},
        {"Краснодар", 58}, {"Ростов", 55}, {"Уфа", 45}, {"Крылья Советов", 48}, {"Рубин", 50},
        {"Ахмат", 52}, {"Урал", 40}, {"Арсенал", 42}, {"Сочи", 56}, {"Нижний Новгород", 44},
        {"Химки", 38}, {"Факел", 36}, {"Балтика", 34}, {"Енисей", 32}, {"Томь", 30}
    };

    findTopTeams(teams, 20);

    return 0;
}