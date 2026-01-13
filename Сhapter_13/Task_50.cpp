#include <iostream>
#include <string>
using namespace std;

const int TEAMS = 20;

struct Championship {
    string teams[TEAMS];
    int results[TEAMS][TEAMS];
    int points[TEAMS];

    void calculatePoints() {
        // Обнуляем очки
        for (int i = 0; i < TEAMS; i++) {
            points[i] = 0;
        }

        // Рассчитываем очки
        for (int i = 0; i < TEAMS; i++) {
            for (int j = 0; j < TEAMS; j++) {
                if (i != j) {
                    points[i] += results[i][j];
                }
            }
        }
    }

    void analyze() {
        calculatePoints();

        // а) Команды с больше побед, чем поражений
        cout << "а) Команды с больше побед, чем поражений:" << endl;
        for (int i = 0; i < TEAMS; i++) {
            int wins = 0, losses = 0;
            for (int j = 0; j < TEAMS; j++) {
                if (i != j) {
                    if (results[i][j] == 3) wins++;
                    if (results[i][j] == 0) losses++;
                }
            }
            if (wins > losses) {
                cout << "   " << teams[i] << " (побед: " << wins << ", поражений: " << losses << ")" << endl;
            }
        }

        // б) Команды без поражений
        cout << "\nб) Команды без поражений:" << endl;
        for (int i = 0; i < TEAMS; i++) {
            bool undefeated = true;
            for (int j = 0; j < TEAMS; j++) {
                if (i != j && results[i][j] == 0) {
                    undefeated = false;
                    break;
                }
            }
            if (undefeated) {
                cout << "   " << teams[i] << endl;
            }
        }

        // в) Чемпион
        cout << "\nв) Чемпион: ";
        int championIndex = 0;
        for (int i = 1; i < TEAMS; i++) {
            if (points[i] > points[championIndex]) {
                championIndex = i;
            }
        }
        cout << teams[championIndex] << " (" << points[championIndex] << " очков)" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");

    Championship champ;

    // Названия команд
    string teamNames[] = {
        "Спартак", "ЦСКА", "Зенит", "Динамо", "Локомотив",
        "Краснодар", "Ростов", "Сочи", "Нижний Новгород", "Рубин",
        "Уфа", "Арсенал", "Урал", "Ахмат", "Крылья Советов",
        "Химки", "Факел", "Балтика", "Енисей", "Томь"
    };

    for (int i = 0; i < TEAMS; i++) {
        champ.teams[i] = teamNames[i];
    }

    // Заполняем результаты (случайные)
    for (int i = 0; i < TEAMS; i++) {
        for (int j = 0; j < TEAMS; j++) {
            if (i == j) {
                champ.results[i][j] = 0;
            }
            else {
                // Случайный результат: 3, 1 или 0
                int r = rand() % 3;
                if (r == 0) champ.results[i][j] = 3;      // победа
                else if (r == 1) champ.results[i][j] = 1; // ничья
                else champ.results[i][j] = 0;             // поражение

                // Для симметрии
                if (champ.results[i][j] == 3) champ.results[j][i] = 0;
                else if (champ.results[i][j] == 1) champ.results[j][i] = 1;
                else champ.results[j][i] = 3;
            }
        }
    }

    champ.analyze();

    return 0;
}