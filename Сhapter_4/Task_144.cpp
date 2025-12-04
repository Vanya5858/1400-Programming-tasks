#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int g, m, n;
    bool leap;
    cout << "Введите год g: ";
    cin >> g;
    cout << "Введите месяц m (1-12): ";
    cin >> m;
    cout << "Введите число n (1-31): ";
    cin >> n;

    leap = ((g % 4 == 0 && g % 100 != 0) || (g % 400 == 0));

    int daysInMonth;
    switch (m) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        daysInMonth = 31; break;
    case 4: case 6: case 9: case 11:
        daysInMonth = 30; break;
    case 2:
        daysInMonth = leap ? 29 : 28; break;
    default: daysInMonth = 0;
    }

    // Следующий день
    int next_n = n, next_m = m, next_g = g;
    if (next_n < daysInMonth) {
        next_n++;
    }
    else {
        next_n = 1;
        next_m++;
        if (next_m > 12) {
            next_m = 1;
            next_g++;
        }
    }
    cout << "Следующий день: " << next_n << "." << next_m << "." << next_g << endl;

    // Предыдущий день
    int prev_n = n, prev_m = m, prev_g = g;
    if (prev_n > 1) {
        prev_n--;
    }
    else {
        prev_m--;
        if (prev_m == 0) {
            prev_m = 12;
            prev_g--;
        }
        // дни в предыдущем месяце
        switch (prev_m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            prev_n = 31; break;
        case 4: case 6: case 9: case 11:
            prev_n = 30; break;
        case 2:
            prev_n = (leap && g == prev_g + 1) ? 29 : 28; break;
        }
    }
    cout << "Предыдущий день: " << prev_n << "." << prev_m << "." << prev_g;
    return 0;
}