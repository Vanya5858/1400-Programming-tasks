#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m, k;
    cout << "Введите номер масти (1-4): ";
    cin >> m;
    cout << "Введите номер достоинства (6-14): ";
    cin >> k;

    // Определение достоинства
    string rank;
    switch (k) {
    case 6: rank = "Шестерка"; break;
    case 7: rank = "Семерка"; break;
    case 8: rank = "Восьмерка"; break;
    case 9: rank = "Девятка"; break;
    case 10: rank = "Десятка"; break;
    case 11: rank = "Валет"; break;
    case 12: rank = "Дама"; break;
    case 13: rank = "Король"; break;
    case 14: rank = "Туз"; break;
    default: rank = "Неизвестное достоинство";
    }

    // Определение масти
    string suit;
    switch (m) {
    case 1: suit = "пик"; break;
    case 2: suit = "треф"; break;
    case 3: suit = "бубен"; break;
    case 4: suit = "червей"; break;
    default: suit = "неизвестной масти";
    }

    cout << rank << " " << suit;
    return 0;
}