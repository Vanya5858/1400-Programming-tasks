#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функции для проверки ходов
bool rookCanMove(int a, int b, int c, int d) {
    return (a == c || b == d);
}

bool bishopCanMove(int a, int b, int c, int d) {
    return (abs(a - c) == abs(b - d));
}

bool queenCanMove(int a, int b, int c, int d) {
    return rookCanMove(a, b, c, d) || bishopCanMove(a, b, c, d);
}

bool knightCanMove(int a, int b, int c, int d) {
    int dx = abs(a - c);
    int dy = abs(b - d);
    return ((dx == 2 && dy == 1) || (dx == 1 && dy == 2));
}

bool kingCanMove(int a, int b, int c, int d) {
    return (abs(a - c) <= 1 && abs(b - d) <= 1 && !(a == c && b == d));
}

bool rookThreatens(int a, int b, int c, int d) {
    return rookCanMove(a, b, c, d);
}

bool bishopThreatens(int a, int b, int c, int d) {
    return bishopCanMove(a, b, c, d);
}

bool queenThreatens(int a, int b, int c, int d) {
    return queenCanMove(a, b, c, d);
}

bool knightThreatens(int a, int b, int c, int d) {
    return knightCanMove(a, b, c, d);
}

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    // Все комбинации фигур (белая, чёрная)
    string combos[20][2] = {
        {"ладья", "ладья"}, {"ладья", "ферзь"}, {"ладья", "конь"}, {"ладья", "слон"},
        {"ферзь", "ферзь"}, {"ферзь", "ладья"}, {"ферзь", "конь"}, {"ферзь", "слон"},
        {"конь", "конь"}, {"конь", "ладья"}, {"конь", "ферзь"}, {"конь", "слон"},
        {"слон", "слон"}, {"слон", "ферзь"}, {"слон", "конь"}, {"слон", "ладья"},
        {"король", "слон"}, {"король", "ферзь"}, {"король", "конь"}, {"король", "ладья"}
    };

    // Буквы для нумерации
    char letters[] = { 'a','б','в','г','д','е','ж','з','и','к','л','м','н','о','п','р','с','т','у','ф' };

    for (int i = 0; i < 20; i++) {
        cout << "\n" << letters[i] << ") Белая " << combos[i][0] << " - Чёрная " << combos[i][1] << ":" << endl;

        int a, b, c, d, e, f;
        bool found = false;
        int attempts = 0;

        while (!found && attempts < 50000) {
            a = rand() % 8 + 1;
            b = rand() % 8 + 1;
            c = rand() % 8 + 1;
            d = rand() % 8 + 1;
            e = rand() % 8 + 1;
            f = rand() % 8 + 1;

            // Пропускаем одинаковые позиции
            if ((a == c && b == d) || (a == e && b == f) || (c == e && d == f)) {
                attempts++;
                continue;
            }

            bool whiteCanMove = false;
            bool blackThreatens = false;

            // Проверяем ход белой фигуры
            if (combos[i][0] == "ладья") whiteCanMove = rookCanMove(a, b, e, f);
            else if (combos[i][0] == "ферзь") whiteCanMove = queenCanMove(a, b, e, f);
            else if (combos[i][0] == "конь") whiteCanMove = knightCanMove(a, b, e, f);
            else if (combos[i][0] == "слон") whiteCanMove = bishopCanMove(a, b, e, f);
            else if (combos[i][0] == "король") whiteCanMove = kingCanMove(a, b, e, f);

            // Проверяем угрозу чёрной фигуры
            if (combos[i][1] == "ладья") blackThreatens = rookThreatens(c, d, e, f);
            else if (combos[i][1] == "ферзь") blackThreatens = queenThreatens(c, d, e, f);
            else if (combos[i][1] == "конь") blackThreatens = knightThreatens(c, d, e, f);
            else if (combos[i][1] == "слон") blackThreatens = bishopThreatens(c, d, e, f);

            found = whiteCanMove && !blackThreatens;
            attempts++;
        }

        if (found) {
            cout << "   Белая на (" << a << "," << b << "), Чёрная на (" << c << "," << d << ")" << endl;
            cout << "   Цель: (" << e << "," << f << ") - МОЖЕТ пойти, НЕ под ударом" << endl;
        }
        else {
            cout << "   Не найдено за 50000 попыток" << endl;
        }
    }

    return 0;
}