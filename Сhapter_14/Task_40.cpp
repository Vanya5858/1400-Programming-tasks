#include <iostream>
using namespace std;

// Функция для определения високосного года
bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

// Функция для определения количества дней в месяце
int daysInMonth(int month, int year, bool leapYear = false) {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return leapYear ? 29 : 28;
    default:
        return 0; // Некорректный месяц
    }
}

// Функция для определения даты предыдущего дня
void previousDay(int& day, int& month, int& year, bool leapYear = false) {
    day--;

    if (day < 1) {
        month--;

        if (month < 1) {
            month = 12;
            year--;
        }

        day = daysInMonth(month, year, leapYear);
    }
}

// Функция для определения даты следующего дня
void nextDay(int& day, int& month, int& year, bool leapYear = false) {
    day++;

    int daysInCurrentMonth = daysInMonth(month, year, leapYear);

    if (day > daysInCurrentMonth) {
        day = 1;
        month++;

        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    int day, month, year;

    cout << "Введите дату (день месяц год): ";
    cin >> day >> month >> year;

    // Проверка високосного года
    bool leap = isLeapYear(year);

    cout << "\nВведенная дата: " << day << "." << month << "." << year;
    cout << " (" << (leap ? "високосный" : "не високосный") << " год)" << endl;

    // а) Предыдущий день
    int prevDay = day, prevMonth = month, prevYear = year;
    previousDay(prevDay, prevMonth, prevYear, leap);
    cout << "а) Предыдущий день: " << prevDay << "." << prevMonth << "." << prevYear << endl;

    // б) Следующий день
    int nextDayVal = day, nextMonth = month, nextYear = year;
    nextDay(nextDayVal, nextMonth, nextYear, leap);
    cout << "б) Следующий день: " << nextDayVal << "." << nextMonth << "." << nextYear << endl;

    return 0;
}