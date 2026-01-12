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

    // Выбираем случайную карту
    int suitIndex = rand() % 4;
    int rankIndex = rand() % 9;

    string cardName;
    if (rankIndex >= 5 && rankIndex <= 7) { // Валет, Дама, Король
        cardName = ranks[rankIndex] + " " + suits[suitIndex];
    }
    else {
        cardName = ranks[rankIndex] + " " + suits[suitIndex];
        // Для "бубен" в родительном падеже
        if (suits[suitIndex] == "бубен") {
            cardName = ranks[rankIndex] + " бубей";
        }
    }

    cout << "Выбрана карта: " << cardName << endl;

    return 0;
}