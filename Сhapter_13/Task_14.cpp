#include <iostream>
using namespace std;

struct TimeFull {
    int hours;
    int minutes;
    int seconds;
};

void compareTimesFull(TimeFull t1, TimeFull t2) {
    int total1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int total2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    if (total1 < total2) {
        cout << "Первый момент времени был раньше" << endl;
    }
    else if (total1 > total2) {
        cout << "Второй момент времени был раньше" << endl;
    }
    else {
        cout << "Моменты времени одинаковы" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    TimeFull moments[24] = {
        {0, 0, 0}, {1, 15, 30}, {2, 30, 45}, {3, 45, 15}, {4, 20, 10},
        {5, 10, 25}, {6, 35, 50}, {7, 40, 5}, {8, 55, 40}, {9, 25, 55},
        {10, 5, 20}, {11, 50, 35}, {12, 30, 0}, {13, 15, 45}, {14, 20, 30},
        {15, 45, 15}, {16, 10, 50}, {17, 35, 25}, {18, 40, 10}, {19, 55, 35},
        {20, 25, 20}, {21, 5, 55}, {22, 50, 40}, {23, 30, 15}
    };

    // Сравниваем разные моменты времени
    cout << "Сравнение 0:00:00 и 1:15:30:" << endl;
    compareTimesFull(moments[0], moments[1]);

    cout << "\nСравнение 12:30:00 и 13:15:45:" << endl;
    compareTimesFull(moments[12], moments[13]);

    return 0;
}