#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    int k;
    cout << "Введите день года (1-365): ";
    cin >> k;

    // 1 января - понедельник
    int day_of_week = (k - 1) % 7;

    if (day_of_week == 5 || day_of_week == 6) {
        cout << k << "-й день года - выходной\n";
    }
    else {
        cout << k << "-й день года - рабочий\n";
    }

    return 0;
}