#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int months = 12;
    double rain[months];

    cout << "Введите количество осадков за каждый месяц года:\n";
    for (int i = 0; i < months; i++) cin >> rain[i];

    double sum = rain[2] + rain[5] + rain[8] + rain[11]; // март, июнь, сентябрь, декабрь

    cout << "Общее число осадков в марте, июне, сентябре и декабре: " << sum << " мм\n";

    return 0;
}