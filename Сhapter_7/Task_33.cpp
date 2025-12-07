#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double precip, sumJan = 0, sumMar = 0;

    cout << "Введите количество осадков за каждый день января (31 число): ";
    for (int i = 0; i < 31; i++) {
        cin >> precip;
        sumJan += precip;
    }

    cout << "Введите количество осадков за каждый день марта (31 число): ";
    for (int i = 0; i < 31; i++) {
        cin >> precip;
        sumMar += precip;
    }

    cout << "Среднедневное количество осадков в январе = " << sumJan / 31 << endl;
    cout << "Среднедневное количество осадков в марте = " << sumMar / 31;

    return 0;
}