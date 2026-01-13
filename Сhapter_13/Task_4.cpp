#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string surname;
    bool isConscript;
};

void printConscriptEmployees(Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        if (employees[i].isConscript) {
            cout << employees[i].surname << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Employee employees[16] = {
        {"Иванов", true},
        {"Петров", false},
        {"Сидоров", true},
        {"Кузнецов", false},
        {"Смирнов", true},
        {"Васильев", false},
        {"Попов", true},
        {"Новиков", false},
        {"Федоров", true},
        {"Морозов", false},
        {"Волков", true},
        {"Алексеев", false},
        {"Лебедев", true},
        {"Семенов", false},
        {"Егоров", true},
        {"Павлов", false}
    };

    printConscriptEmployees(employees, 16);

    return 0;
}