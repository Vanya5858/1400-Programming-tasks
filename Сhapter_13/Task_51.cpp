#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int TEAMS = 16;
const int MATCHES = 15;

struct MatchResult {
    int goalsScored;
    int goalsConceded;
};

struct Team {
    string name;
    MatchResult results[MATCHES];
    int wins;
    int draws;
    int losses;
    int points;
    int totalGoalsScored;
    int totalGoalsConceded;
};

void analyzeChampionship(Team teams[]) {
    // Инициализируем статистику
    for (int i = 0; i < TEAMS; i++) {
        teams[i].wins = 0;
        teams[i].draws = 0;
        teams[i].losses = 0;
        teams[i].points = 0;
        teams[i].totalGoalsScored = 0;
        teams[i].totalGoalsConceded = 0;

        for (int j = 0; j < MATCHES; j++) {
            // Подсчитываем статистику за матч
            teams[i].totalGoalsScored += teams[i].results[j].goalsScored;
            teams[i].totalGoalsConceded += teams[i].results[j].goalsConceded;

            if (teams[i].results[j].goalsScored > teams[i].results[j].goalsConceded) {
                teams[i].wins++;
                teams[i].points += 3;
            }
            else if (teams[i].results[j].goalsScored == teams[i].results[j].goalsConceded) {
                teams[i].draws++;
                teams[i].points += 1;
            }
            else {
                teams[i].losses++;
            }
        }
    }

    // а) Таблица чемпионата (упрощенная версия)
    cout << "а) Таблица чемпионата:" << endl;
    cout << "======================" << endl;
    cout << left << setw(20) << "Команда" << setw(5) << "И"
        << setw(5) << "В" << setw(5) << "Н" << setw(5) << "П"
        << setw(5) << "ГЗ" << setw(5) << "ГП" << setw(5) << "О" << endl;
    cout << string(55, '-') << endl;

    for (int i = 0; i < TEAMS; i++) {
        cout << left << setw(20) << teams[i].name
            << setw(5) << MATCHES
            << setw(5) << teams[i].wins
            << setw(5) << teams[i].draws
            << setw(5) << teams[i].losses
            << setw(5) << teams[i].totalGoalsScored
            << setw(5) << teams[i].totalGoalsConceded
            << setw(5) << teams[i].points << endl;
    }

    // б) Матчи с ничьей (общее количество)
    int totalDraws = 0;
    for (int i = 0; i < TEAMS; i++) {
        totalDraws += teams[i].draws;
    }
    // Каждая ничья учитывается дважды (для обеих команд), поэтому делим на 2
    cout << "\nб) Всего ничьих в чемпионате: " << totalDraws / 2 << endl;

    // в) Матчи с разностью мячей >= 3
    int bigWins = 0;
    for (int i = 0; i < TEAMS; i++) {
        for (int j = 0; j < MATCHES; j++) {
            if (abs(teams[i].results[j].goalsScored - teams[i].results[j].goalsConceded) >= 3) {
                bigWins++;
            }
        }
    }
    // Каждый матч учитывается дважды
    cout << "в) Матчей с разностью мячей >= 3: " << bigWins / 2 << endl;

    // г) Статистика каждой команды
    cout << "\nг) Статистика команд:" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < TEAMS; i++) {
        cout << teams[i].name << ": "
            << teams[i].wins << " выигрышей, "
            << teams[i].draws << " ничьих, "
            << teams[i].losses << " поражений" << endl;
    }

    // д) Очки каждой команды
    cout << "\nд) Очки команд:" << endl;
    cout << "==============" << endl;
    for (int i = 0; i < TEAMS; i++) {
        cout << teams[i].name << ": " << teams[i].points << " очков" << endl;
    }

    // е) Чемпион
    cout << "\nе) Чемпион: ";
    int championIndex = 0;
    for (int i = 1; i < TEAMS; i++) {
        if (teams[i].points > teams[championIndex].points) {
            championIndex = i;
        }
    }
    cout << teams[championIndex].name << " ("
        << teams[championIndex].points << " очков)" << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    Team teams[TEAMS];

    // Названия команд
    string teamNames[TEAMS] = {
        "Спартак", "ЦСКА", "Зенит", "Динамо", "Локомотив",
        "Краснодар", "Ростов", "Сочи", "Нижний Новгород", "Рубин",
        "Уфа", "Арсенал", "Урал", "Ахмат", "Крылья Советов", "Химки"
    };

    // Инициализируем команды
    for (int i = 0; i < TEAMS; i++) {
        teams[i].name = teamNames[i];

        // Заполняем результаты матчей (случайные)
        for (int j = 0; j < MATCHES; j++) {
            teams[i].results[j].goalsScored = rand() % 5; // 0-4 гола
            teams[i].results[j].goalsConceded = rand() % 5; // 0-4 гола
        }
    }

    analyzeChampionship(teams);

    return 0;
}