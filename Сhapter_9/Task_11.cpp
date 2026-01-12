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

    // а) Для каждого работника - в какой из месяцев он получил наибольшую зарплату
    cout << "\nа) Месяц с максимальной зарплатой для каждого работника:" << endl;
    for (int i = 0; i < WORKERS; i++) {
        int maxMonth = 0;
        int maxSal = salary[i][0];
        for (int j = 1; j < MONTHS; j++) {
            if (salary[i][j] > maxSal) {
                maxSal = salary[i][j];
                maxMonth = j;
            }
        }
        cout << "Работник " << (i + 1) << ": месяц " << (maxMonth + 1)
            << " (" << maxSal << " руб.)" << endl;
    }

    // б) Для каждого месяца - кто из работников получил наибольшую зарплату за этот месяц
    cout << "\nб) Лучший работник каждого месяца:" << endl;
    for (int j = 0; j < MONTHS; j++) {
        int bestWorker = 0;
        int maxSal = salary[0][j];
        for (int i = 1; i < WORKERS; i++) {
            if (salary[i][j] > maxSal) {
                maxSal = salary[i][j];
                bestWorker = i;
            }
        }
        cout << "Месяц " << (j + 1) << ": работник " << (bestWorker + 1)
            << " (" << maxSal << " руб.)" << endl;
    }

    return 0;
}