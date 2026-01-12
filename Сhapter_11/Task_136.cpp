#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 365;
    int wind[days];

    cout << "Введите направление ветра за каждый день (1-8):\n";
    for (int i = 0; i < days; i++) cin >> wind[i];

    int counts[8] = { 0 }; // Индексы 0-7 соответствуют направлениям 1-8

    for (int i = 0; i < days; i++) {
        if (wind[i] >= 1 && wind[i] <= 8) {
            counts[wind[i] - 1]++;
        }
    }

    // Находим направление с минимальной частотой
    int minDirection = 0;
    for (int i = 1; i < 8; i++) {
        if (counts[i] < counts[minDirection]) {
            minDirection = i;
        }
    }

    cout << "Жилой комплекс должен быть расположен с направления: ";
    switch (minDirection + 1) {
    case 1: cout << "северного"; break;
    case 2: cout << "южного"; break;
    case 3: cout << "восточного"; break;
    case 4: cout << "западного"; break;
    case 5: cout << "северо-западного"; break;
    case 6: cout << "северо-восточного"; break;
    case 7: cout << "юго-западного"; break;
    case 8: cout << "юго-восточного"; break;
    }
    cout << " (направление " << minDirection + 1 << ")" << endl;

    return 0;
}