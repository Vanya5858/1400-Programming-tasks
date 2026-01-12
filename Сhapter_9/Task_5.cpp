#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int WORKERS = 12;
    const int MONTHS = 3;
    int salary[WORKERS][MONTHS];

    // Ввод данных
    cout << "Введите зарплату для каждого работника:" << endl;
    for (int i = 0; i < WORKERS; i++) {
        cout << "Работник " << (i + 1) << " (3 месяца через пробел): ";
        for (int j = 0; j < MONTHS; j++) {
            cin >> salary[i][j];
        }
    }

    // а) Общая сумма за квартал всем работникам
    int totalAll = 0;
    for (int i = 0; i < WORKERS; i++) {
        for (int j = 0; j < MONTHS; j++) {
            totalAll += salary[i][j];
        }
    }
    cout << "\nа) Общая сумма за квартал: " << totalAll << endl;

    // б) Зарплата каждого работника за квартал
    cout << "\nб) Зарплата каждого работника за квартал:" << endl;
    for (int i = 0; i < WORKERS; i++) {
        int workerTotal = 0;
        for (int j = 0; j < MONTHS; j++) {
            workerTotal += salary[i][j];
        }
        cout << "Работник " << (i + 1) << ": " << workerTotal << endl;
    }

    // в) Общая зарплата всех работников за каждый месяц
    cout << "\nв) Общая зарплата по месяцам:" << endl;
    for (int j = 0; j < MONTHS; j++) {
        int monthTotal = 0;
        for (int i = 0; i < WORKERS; i++) {
            monthTotal += salary[i][j];
        }
        cout << "Месяц " << (j + 1) << ": " << monthTotal << endl;
    }

    return 0;
}