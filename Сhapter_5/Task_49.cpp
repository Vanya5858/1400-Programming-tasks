#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    double deposit = 1000; // начальный вклад
    double interest_rate = 0.02; // 2% в месяц

    cout << "Прирост суммы вклада:\n";
    for (int month = 1; month <= 10; month++) {
        double increase = deposit * interest_rate;
        deposit += increase;
        cout << "За " << month << "-й месяц: " << increase << " руб.\n";
    }

    deposit = 1000; // сбрасываем для второй части задачи
    cout << "\nСумма вклада:\n";
    for (int month = 1; month <= 12; month++) {
        deposit *= (1 + interest_rate);
        if (month >= 3) {
            cout << "Через " << month << " месяцев: " << deposit << " руб.\n";
        }
    }

    return 0;
}