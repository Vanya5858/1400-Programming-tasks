#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k, d;
    cout << "Введите день года k (1-365): ";
    cin >> k;
    cout << "Введите день недели 1 января d (1-пн..7-вс): ";
    cin >> d;

    int dayOfWeek = (k + d - 2) % 7 + 1; // 1-пн, 2-вт, ... 7-вс

    switch (dayOfWeek) {
    case 1: cout << "понедельник"; break;
    case 2: cout << "вторник"; break;
    case 3: cout << "среда"; break;
    case 4: cout << "четверг"; break;
    case 5: cout << "пятница"; break;
    case 6: cout << "суббота"; break;
    case 7: cout << "воскресенье"; break;
    }
    return 0;
}