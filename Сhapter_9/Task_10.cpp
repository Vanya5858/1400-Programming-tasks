#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int WORKERS = 12;
    const int MONTHS = 3;
    int salary[WORKERS][MONTHS];

    // Ввод данных
    cout << "Введите зарплату:" << endl;
    for (int i = 0; i < WORKERS; i++) {
        cout << "Работник " << (i + 1) << ": ";
        for (int j = 0; j < MONTHS; j++) {
            cin >> salary[i][j];
        }
    }

    // а) Максимальная зарплата из указанных в таблице
    int maxSalary = salary[0][0];
    for (int i = 0; i < WORKERS; i++) {
        for (int j = 0; j < MONTHS; j++) {
            if (salary[i][j] > maxSalary) {
                maxSalary = salary[i][j];
            }
        }
    }
    cout << "\nа) Максимальная зарплата: " << maxSalary << endl;

    // б) Номер работника, получившего за квартал наибольшую сумму
    int bestWorker = 0;
    int maxTotal = 0;
    for (int i = 0; i < WORKERS; i++) {
        int total = 0;
        for (int j = 0; j < MONTHS; j++) {
            total += salary[i][j];
        }
        if (total > maxTotal) {
            maxTotal = total;
            bestWorker = i;
        }
    }
    cout << "б) Лучший работник: №" << (bestWorker + 1)
        << " (сумма: " << maxTotal << ")" << endl;

    // в) В каком месяце общая зарплата всех работников была максимальной
    int bestMonth = 0;
    int maxMonthTotal = 0;
    for (int j = 0; j < MONTHS; j++) {
        int monthTotal = 0;
        for (int i = 0; i < WORKERS; i++) {
            monthTotal += salary[i][j];
        }
        if (monthTotal > maxMonthTotal) {
            maxMonthTotal = monthTotal;
            bestMonth = j;
        }
    }
    cout << "в) Самый прибыльный месяц: " << (bestMonth + 1)
        << " (сумма: " << maxMonthTotal << ")" << endl;

    return 0;
}