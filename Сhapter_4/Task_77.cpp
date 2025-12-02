#include <iostream>
#include <cmath>
using namespace std;

// Функции для проверки угроз фигур
bool rook_threat(int a, int b, int c, int d) {
    return (a == c || b == d);
}

bool bishop_threat(int a, int b, int c, int d) {
    return (abs(a - c) == abs(b - d));
}

bool queen_threat(int a, int b, int c, int d) {
    return rook_threat(a, b, c, d) || bishop_threat(a, b, c, d);
}

bool knight_threat(int a, int b, int c, int d) {
    return (abs(a - c) == 2 && abs(b - d) == 1) || (abs(a - c) == 1 && abs(b - d) == 2);
}

bool king_threat(int a, int b, int c, int d) {
    return abs(a - c) <= 1 && abs(b - d) <= 1;
}

// Функции для проверки ходов белых фигур
bool rook_move(int a, int b, int e, int f) {
    return (a == e || b == f);
}

bool bishop_move(int a, int b, int e, int f) {
    return (abs(a - e) == abs(b - f));
}

bool queen_move(int a, int b, int e, int f) {
    return rook_move(a, b, e, f) || bishop_move(a, b, e, f);
}

bool knight_move(int a, int b, int e, int f) {
    return (abs(a - e) == 2 && abs(b - f) == 1) || (abs(a - e) == 1 && abs(b - f) == 2);
}

bool king_move(int a, int b, int e, int f) {
    return abs(a - e) <= 1 && abs(b - f) <= 1;
}

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c, d, e, f;
    cout << "Введите координаты:\n";
    cout << "Белая фигура (a b): ";
    cin >> a >> b;
    cout << "Черная фигура (c d): ";
    cin >> c >> d;
    cout << "Целевое поле (e f): ";
    cin >> e >> f;

    // Проверяем все варианты сочетаний
    cout << "\nРезультаты для всех сочетаний фигур:\n";
    cout << "=====================================\n";

    // а) ладья и ладья
    if (rook_move(a, b, e, f) && !rook_threat(c, d, e, f))
        cout << "а) Ладья+ладья: МОЖЕТ\n";
    else
        cout << "а) Ладья+ладья: НЕ МОЖЕТ\n";

    // б) ладья и ферзь
    if (rook_move(a, b, e, f) && !queen_threat(c, d, e, f))
        cout << "б) Ладья+ферзь: МОЖЕТ\n";
    else
        cout << "б) Ладья+ферзь: НЕ МОЖЕТ\n";

    // в) ладья и конь
    if (rook_move(a, b, e, f) && !knight_threat(c, d, e, f))
        cout << "в) Ладья+конь: МОЖЕТ\n";
    else
        cout << "в) Ладья+конь: НЕ МОЖЕТ\n";

    // г) ладья и слон
    if (rook_move(a, b, e, f) && !bishop_threat(c, d, e, f))
        cout << "г) Ладья+слон: МОЖЕТ\n";
    else
        cout << "г) Ладья+слон: НЕ МОЖЕТ\n";

    // д) ферзь и ферзь
    if (queen_move(a, b, e, f) && !queen_threat(c, d, e, f))
        cout << "д) Ферзь+ферзь: МОЖЕТ\n";
    else
        cout << "д) Ферзь+ферзь: НЕ МОЖЕТ\n";

    // е) ферзь и ладья
    if (queen_move(a, b, e, f) && !rook_threat(c, d, e, f))
        cout << "е) Ферзь+ладья: МОЖЕТ\n";
    else
        cout << "е) Ферзь+ладья: НЕ МОЖЕТ\n";

    // ж) ферзь и конь
    if (queen_move(a, b, e, f) && !knight_threat(c, d, e, f))
        cout << "ж) Ферзь+конь: МОЖЕТ\n";
    else
        cout << "ж) Ферзь+конь: НЕ МОЖЕТ\n";

    // з) ферзь и слон
    if (queen_move(a, b, e, f) && !bishop_threat(c, d, e, f))
        cout << "з) Ферзь+слон: МОЖЕТ\n";
    else
        cout << "з) Ферзь+слон: НЕ МОЖЕТ\n";

    // и) конь и конь
    if (knight_move(a, b, e, f) && !knight_threat(c, d, e, f))
        cout << "и) Конь+конь: МОЖЕТ\n";
    else
        cout << "и) Конь+конь: НЕ МОЖЕТ\n";

    // к) конь и ладья
    if (knight_move(a, b, e, f) && !rook_threat(c, d, e, f))
        cout << "к) Конь+ладья: МОЖЕТ\n";
    else
        cout << "к) Конь+ладья: НЕ МОЖЕТ\n";

    // л) конь и ферзь
    if (knight_move(a, b, e, f) && !queen_threat(c, d, e, f))
        cout << "л) Конь+ферзь: МОЖЕТ\n";
    else
        cout << "л) Конь+ферзь: НЕ МОЖЕТ\n";

    // м) конь и слон
    if (knight_move(a, b, e, f) && !bishop_threat(c, d, e, f))
        cout << "м) Конь+слон: МОЖЕТ\n";
    else
        cout << "м) Конь+слон: НЕ МОЖЕТ\n";

    // н) слон и слон
    if (bishop_move(a, b, e, f) && !bishop_threat(c, d, e, f))
        cout << "н) Слон+слон: МОЖЕТ\n";
    else
        cout << "н) Слон+слон: НЕ МОЖЕТ\n";

    // о) слон и ферзь
    if (bishop_move(a, b, e, f) && !queen_threat(c, d, e, f))
        cout << "о) Слон+ферзь: МОЖЕТ\n";
    else
        cout << "о) Слон+ферзь: НЕ МОЖЕТ\n";

    // п) слон и конь
    if (bishop_move(a, b, e, f) && !knight_threat(c, d, e, f))
        cout << "п) Слон+конь: МОЖЕТ\n";
    else
        cout << "п) Слон+конь: НЕ МОЖЕТ\n";

    // р) слон и ладья
    if (bishop_move(a, b, e, f) && !rook_threat(c, d, e, f))
        cout << "р) Слон+ладья: МОЖЕТ\n";
    else
        cout << "р) Слон+ладья: НЕ МОЖЕТ\n";

    // с) король и слон
    if (king_move(a, b, e, f) && !bishop_threat(c, d, e, f))
        cout << "с) Король+слон: МОЖЕТ\n";
    else
        cout << "с) Король+слон: НЕ МОЖЕТ\n";

    // т) король и ферзь
    if (king_move(a, b, e, f) && !queen_threat(c, d, e, f))
        cout << "т) Король+ферзь: МОЖЕТ\n";
    else
        cout << "т) Король+ферзь: НЕ МОЖЕТ\n";

    // у) король и конь
    if (king_move(a, b, e, f) && !knight_threat(c, d, e, f))
        cout << "у) Король+конь: МОЖЕТ\n";
    else
        cout << "у) Король+конь: НЕ МОЖЕТ\n";

    // ф) король и ладья
    if (king_move(a, b, e, f) && !rook_threat(c, d, e, f))
        cout << "ф) Король+ладья: МОЖЕТ\n";
    else
        cout << "ф) Король+ладья: НЕ МОЖЕТ\n";

    return 0;
}