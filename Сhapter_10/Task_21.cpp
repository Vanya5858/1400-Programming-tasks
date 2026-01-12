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

    int suit1 = rand() % 4;
    int rank1 = rand() % 9;
    int suit2, rank2;

    // Убедимся, что карты разные
    do {
        suit2 = rand() % 4;
        rank2 = rand() % 9;
    } while (suit1 == suit2 && rank1 == rank2);

    cout << "Игрок 1 выбрал: ";
    if (rank1 >= 5 && rank1 <= 7) {
        cout << ranks[rank1] << " " << suits[suit1];
    }
    else {
        cout << ranks[rank1] << " " << suits[suit1];
        if (suits[suit1] == "бубен") cout << "ей";
    }
    cout << endl;

    cout << "Игрок 2 выбрал: ";
    if (rank2 >= 5 && rank2 <= 7) {
        cout << ranks[rank2] << " " << suits[suit2];
    }
    else {
        cout << ranks[rank2] << " " << suits[suit2];
        if (suits[suit2] == "бубен") cout << "ей";
    }
    cout << endl;

    bool player1Wins = false;

    if (suit1 > suit2) {
        player1Wins = true;
    }
    else if (suit1 == suit2) {
        if (rank1 > rank2) {
            player1Wins = true;
        }
    }

    if (player1Wins) {
        cout << "Победил Игрок 1!" << endl;
    }
    else {
        cout << "Победил Игрок 2!" << endl;
    }

    return 0;
}