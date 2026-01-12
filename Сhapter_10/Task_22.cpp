#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    string suits[4] = { "пик", "треф", "бубен", "червей" };
    string ranks[9] = { "шестёрка", "семёрка", "восьмёрка", "девятка",
                      "десятка", "валет", "дама", "король", "туз" };

    int rounds;
    cout << "Сколько раундов сыграть? ";
    cin >> rounds;

    int player1Wins = 0, player2Wins = 0;

    for (int round = 1; round <= rounds; round++) {
        cout << "\n--- Раунд " << round << " ---" << endl;

        // Выбираем карты
        int suit1 = rand() % 4;
        int rank1 = rand() % 9;
        int suit2 = rand() % 4;
        int rank2 = rand() % 9;

        cout << "Игрок 1: ";
        if (rank1 >= 5 && rank1 <= 7) {
            cout << ranks[rank1] << " " << suits[suit1];
        }
        else {
            cout << ranks[rank1] << " " << suits[suit1];
            if (suits[suit1] == "бубен") cout << "ей";
        }
        cout << endl;

        cout << "Игрок 2: ";
        if (rank2 >= 5 && rank2 <= 7) {
            cout << ranks[rank2] << " " << suits[suit2];
        }
        else {
            cout << ranks[rank2] << " " << suits[suit2];
            if (suits[suit2] == "бубен") cout << "ей";
        }
        cout << endl;

        // Определяем победителя раунда
        bool roundWinnerIsPlayer1 = false;

        if (suit1 > suit2) {
            roundWinnerIsPlayer1 = true;
        }
        else if (suit1 == suit2) {
            if (rank1 > rank2) {
                roundWinnerIsPlayer1 = true;
            }
        }

        if (roundWinnerIsPlayer1) {
            cout << "Победил Игрок 1 в этом раунде!" << endl;
            player1Wins++;
        }
        else if (suit2 > suit1 || (suit1 == suit2 && rank2 > rank1)) {
            cout << "Победил Игрок 2 в этом раунде!" << endl;
            player2Wins++;
        }
        else {
            cout << "Ничья в этом раунде!" << endl;
        }
    }

    // Итог игры
    cout << "\n=== ИТОГ ИГРЫ ===" << endl;
    cout << "Побед Игрока 1: " << player1Wins << endl;
    cout << "Побед Игрока 2: " << player2Wins << endl;
    cout << "Ничьих: " << (rounds - player1Wins - player2Wins) << endl;

    if (player1Wins > player2Wins) {
        cout << "ОБЩИЙ ПОБЕДИТЕЛЬ: ИГРОК 1!" << endl;
    }
    else if (player2Wins > player1Wins) {
        cout << "ОБЩИЙ ПОБЕДИТЕЛЬ: ИГРОК 2!" << endl;
    }
    else {
        cout << "ОБЩАЯ НИЧЬЯ!" << endl;
    }

    return 0;
}