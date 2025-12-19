#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int days;
    cout << "Введите количество дней в месяце: ";
    cin >> days;

    double maxTemp, temp;
    cin >> maxTemp;

    for (int i = 1; i < days; i++) {
        cin >> temp;
        if (temp > maxTemp) {
            maxTemp = temp;
        }
    }

    cout << "Максимальная температура месяца: " << maxTemp << " C\n";
    return 0;
}