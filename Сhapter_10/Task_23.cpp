#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << "Игра в карты с козырем" << endl;

    string suits[4] = { "пик", "треф", "бубен", "червей" };
    string ranks[9] = { "шестёрка", "семёрка", "восьмёрка", "девятка",
                      "десятка", "валет", "дама", "король", "туз" };

    int trumpSuitIndex = rand() % 4;
    string trumpSuit = suits[trumpSuitIndex];

    cout << "Козырная масть: " << trumpSuit;
    if (trumpSuit == "бубен") {
        cout << "ей";
    }
    cout << endl << endl;

    // Выбираем карту для игрока
    int playerSuit = rand() % 4;
    int playerRank = rand() % 9;

    cout << "Игрок выбрал: ";
    // Определяем правильное склонение
    if (playerRank >= 5 && playerRank <= 7) { // Валет, Дама, Король
        cout << ranks[playerRank] << " " << suits[playerSuit];
    }
    else {
        cout << ranks[playerRank] << " " << suits[playerSuit];
        if (suits[playerSuit] == "бубен") {
            cout << "ей";
        }
    }
    cout << endl;

    // Выбираем карту для компьютера
    int computerSuit = rand() % 4;
    int computerRank = rand() % 9;

    cout << "Компьютер выбрал: ";
    if (computerRank >= 5 && computerRank <= 7) {
        cout << ranks[computerRank] << " " << suits[computerSuit];
    }
    else {
        cout << ranks[computerRank] << " " << suits[computerSuit];
        if (suits[computerSuit] == "бубен") {
            cout << "ей";
        }
    }
    cout << endl << endl;

    // Определяем победителя с учётом козыря
    cout << "Результат: ";

    // Проверяем козырные карты
    bool playerIsTrump = (playerSuit == trumpSuitIndex);
    bool computerIsTrump = (computerSuit == trumpSuitIndex);

    if (playerIsTrump && !computerIsTrump) {
        cout << "Победил Игрок (козырь!)" << endl;
    }
    else if (!playerIsTrump && computerIsTrump) {
        cout << "Победил Компьютер (козырь!)" << endl;
    }
    else if (playerIsTrump && computerIsTrump) {
        // Обе карты козырные - сравниваем достоинства
        if (playerRank > computerRank) {
            cout << "Победил Игрок (старший козырь)" << endl;
        }
        else if (computerRank > playerRank) {
            cout << "Победил Компьютер (старший козырь)" << endl;
        }
        else {
            cout << "Ничья (одинаковые козырные карты)" << endl;
        }
    }
    else {
        // Ни одна карта не козырная - сравниваем по обычным правилам
        if (playerSuit > computerSuit) {
            cout << "Победил Игрок (старшая масть)" << endl;
        }
        else if (computerSuit > playerSuit) {
            cout << "Победил Компьютер (старшая масть)" << endl;
        }
        else {
            // Одинаковая масть - сравниваем достоинства
            if (playerRank > computerRank) {
                cout << "Победил Игрок (старшая карта)" << endl;
            }
            else if (computerRank > playerRank) {
                cout << "Победил Компьютер (старшая карта)" << endl;
            }
            else {
                cout << "Ничья (одинаковые карты)" << endl;
            }
        }
    }

    return 0;
}