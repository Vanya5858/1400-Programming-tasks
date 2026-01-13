#include <iostream>
#include <string>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

void compareDates(Date d1, Date d2) {
    if (d1.year > d2.year) {
        cout << "Первое событие произошло позже" << endl;
    }
    else if (d1.year < d2.year) {
        cout << "Второе событие произошло позже" << endl;
    }
    else {
        if (d1.month > d2.month) {
            cout << "Первое событие произошло позже" << endl;
        }
        else if (d1.month < d2.month) {
            cout << "Второе событие произошло позже" << endl;
        }
        else {
            if (d1.day > d2.day) {
                cout << "Первое событие произошло позже" << endl;
            }
            else if (d1.day < d2.day) {
                cout << "Второе событие произошло позже" << endl;
            }
            else {
                cout << "События произошли в один день" << endl;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Date events[20] = {
        {1945, 5, 9}, {1961, 4, 12}, {1986, 4, 26}, {1991, 12, 26}, {2000, 1, 1},
        {2008, 8, 8}, {2014, 2, 7}, {2018, 6, 14}, {2020, 3, 11}, {2022, 2, 24},
        {1939, 9, 1}, {1941, 6, 22}, {1957, 10, 4}, {1969, 7, 20}, {1975, 4, 30},
        {1980, 7, 19}, {1999, 12, 31}, {2001, 9, 11}, {2010, 1, 12}, {2016, 8, 5}
    };

    // Сравниваем разные события
    cout << "Сравнение 9 мая 1945 и 12 апреля 1961:" << endl;
    compareDates(events[0], events[1]);

    cout << "\nСравнение 1 января 2000 и 31 декабря 1999:" << endl;
    compareDates(events[4], events[16]);

    return 0;
}