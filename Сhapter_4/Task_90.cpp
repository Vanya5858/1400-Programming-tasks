#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m, n;
    cout << "Введите номер месяца и число: ";
    cin >> m >> n;

    // а) предыдущий день
    int prev_day = n - 1;
    int prev_month = m;

    if (prev_day == 0) {
        prev_month--;
        // Количество дней в предыдущем месяце
        if (prev_month == 2) prev_day = 28;
        else if (prev_month == 4 || prev_month == 6 || prev_month == 9 || prev_month == 11) prev_day = 30;
        else prev_day = 31;
    }
    cout << "а) Предыдущий день: " << prev_day << "." << prev_month << endl;

    // б) следующий день
    int next_day = n + 1;
    int next_month = m;
    int days_in_month;

    // Определяем количество дней в текущем месяце
    if (m == 2) days_in_month = 28;
    else if (m == 4 || m == 6 || m == 9 || m == 11) days_in_month = 30;
    else days_in_month = 31;

    if (next_day > days_in_month) {
        next_day = 1;
        next_month++;
    }
    cout << "б) Следующий день: " << next_day << "." << next_month << endl;

    return 0;
}