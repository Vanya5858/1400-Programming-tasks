#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
};

void compareTimes(Time t1, Time t2) {
    int total1 = t1.hours * 60 + t1.minutes;
    int total2 = t2.hours * 60 + t2.minutes;

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

    Time moments[25] = {
        {8, 30}, {9, 15}, {10, 0}, {11, 45}, {12, 30},
        {13, 20}, {14, 10}, {15, 5}, {16, 50}, {17, 40},
        {18, 35}, {19, 25}, {20, 15}, {21, 0}, {22, 55},
        {23, 30}, {0, 45}, {1, 20}, {2, 10}, {3, 5},
        {4, 40}, {5, 25}, {6, 15}, {7, 0}, {8, 55}
    };

    // Сравниваем первый и второй моменты
    cout << "Сравнение 8:30 и 9:15:" << endl;
    compareTimes(moments[0], moments[1]);

    cout << "\nСравнение 23:30 и 0:45:" << endl;
    compareTimes(moments[15], moments[16]);

    return 0;
}