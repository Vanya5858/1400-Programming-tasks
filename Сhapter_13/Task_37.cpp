#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string surname;
    double salary; // зарплата в тыс. руб.
    char gender; // 'M' - мужчина, 'F' - женщина
};

void findSalaryExtremes(Employee employees[], int n) {
    // а) Мужчина с самой большой зарплатой
    Employee highestPaidMale = { "", 0.0, 'M' };
    bool foundMale = false;

    // б) Мужчина и женщина с самой маленькой зарплатой
    Employee lowestPaidMale = { "", 1e9, 'M' };
    Employee lowestPaidFemale = { "", 1e9, 'F' };

    for (int i = 0; i < n; i++) {
        if (employees[i].gender == 'M') {
            // Для самой большой зарплаты мужчины
            if (employees[i].salary > highestPaidMale.salary) {
                highestPaidMale = employees[i];
                foundMale = true;
            }
            // Для самой маленькой зарплаты мужчины
            if (employees[i].salary < lowestPaidMale.salary) {
                lowestPaidMale = employees[i];
            }
        }
        else if (employees[i].gender == 'F') {
            // Для самой маленькой зарплаты женщины
            if (employees[i].salary < lowestPaidFemale.salary) {
                lowestPaidFemale = employees[i];
            }
        }
    }

    cout << "а) Мужчина с самой большой зарплатой:" << endl;
    if (foundMale) {
        cout << "   " << highestPaidMale.surname << ": " << highestPaidMale.salary << " тыс. руб." << endl;
    }
    else {
        cout << "   Мужчин в списке нет" << endl;
    }

    cout << "\nб) С самой маленькой зарплатой:" << endl;
    cout << "   Мужчина: " << lowestPaidMale.surname << " (" << lowestPaidMale.salary << " тыс. руб.)" << endl;
    cout << "   Женщина: " << lowestPaidFemale.surname << " (" << lowestPaidFemale.salary << " тыс. руб.)" << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    Employee employees[20] = {
        {"Иванов", 85.5, 'M'}, {"Петрова", 65.3, 'F'}, {"Сидоров", 92.2, 'M'},
        {"Кузнецова", 58.7, 'F'}, {"Смирнов", 78.8, 'M'}, {"Васильева", 72.4, 'F'},
        {"Попов", 95.1, 'M'}, {"Новикова", 67.9, 'F'}, {"Федоров", 88.3, 'M'},
        {"Морозова", 59.2, 'F'}, {"Волков", 76.7, 'M'}, {"Алексеева", 63.5, 'F'},
        {"Лебедев", 91.5, 'M'}, {"Семенова", 70.8, 'F'}, {"Егоров", 82.9, 'M'},
        {"Павлова", 64.1, 'F'}, {"Козлов", 79.2, 'M'}, {"Степанова", 66.3, 'F'},
        {"Николаев", 87.4, 'M'}, {"Орлова", 68.7, 'F'}
    };

    findSalaryExtremes(employees, 20);

    return 0;
}