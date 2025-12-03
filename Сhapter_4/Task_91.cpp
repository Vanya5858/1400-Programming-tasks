#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int g, m, n;
    cout << "Введите год, месяц и число: ";
    cin >> g >> m >> n;

    // а) предыдущий день
    int prev_day = n - 1;
    int prev_month = m;
    int prev_year = g;

    if (prev_day == 0) {
        prev_month--;
        if (prev_month == 0) {
            prev_month = 12;
            prev_year--;
        }

        // Количество дней в предыдущем месяце
        int days_in_prev_month;
        if (prev_month == 2) {
            // Проверка на високосный год
            bool is_leap = (prev_year % 4 == 0 && prev_year % 100 != 0) || (prev_year % 400 == 0);
            days_in_prev_month = is_leap ? 29 : 28;
        }
        else if (prev_month == 4 || prev_month == 6 || prev_month == 9 || prev_month == 11) {
            days_in_prev_month = 30;
        }
        else {
            days_in_prev_month = 31;
        }
        prev_day = days_in_prev_month;
    }
    cout << "а) Предыдущий день: " << prev_day << "." << prev_month << "." << prev_year << endl;

    // б) следующий день
    int next_day = n + 1;
    int next_month = m;
    int next_year = g;

    // Количество дней в текущем месяце
    int days_in_month;
    if (m == 2) {
        bool is_leap = (g % 4 == 0 && g % 100 != 0) || (g % 400 == 0);
        days_in_month = is_leap ? 29 : 28;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        days_in_month = 30;
    }
    else {
        days_in_month = 31;
    }

    if (next_day > days_in_month) {
        next_day = 1;
        next_month++;
        if (next_month > 12) {
            next_month = 1;
            next_year++;
        }
    }
    cout << "б) Следующий день: " << next_day << "." << next_month << "." << next_year << endl;

    return 0;
}