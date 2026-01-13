#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string surname;
    int age;
    bool isConscript; // true - военнообязанный, false - нет
};

void findAgeExtremes(Employee employees[], int n) {
    // а) Самый младший среди военнообязанных
    Employee youngestConscript = { "", 1000, true }; // большой начальный возраст
    bool foundConscript = false;

    // б) Самые старшие в каждой группе
    Employee oldestConscript = { "", -1, true };
    Employee oldestNonConscript = { "", -1, false };

    for (int i = 0; i < n; i++) {
        if (employees[i].isConscript) {
            // Самый младший военнообязанный
            if (employees[i].age < youngestConscript.age) {
                youngestConscript = employees[i];
                foundConscript = true;
            }
            // Самый старший военнообязанный
            if (employees[i].age > oldestConscript.age) {
                oldestConscript = employees[i];
            }
        }
        else {
            // Самый старший невоеннообязанный
            if (employees[i].age > oldestNonConscript.age) {
                oldestNonConscript = employees[i];
            }
        }
    }

    cout << "а) Самый младший среди военнообязанных:" << endl;
    if (foundConscript) {
        cout << "   " << youngestConscript.surname << ", возраст: " << youngestConscript.age << endl;
    }
    else {
        cout << "   Военнообязанных в списке нет" << endl;
    }

    cout << "\nб) Самые старшие в каждой группе:" << endl;
    cout << "   Среди военнообязанных: " << oldestConscript.surname
        << ", возраст: " << oldestConscript.age << endl;
    cout << "   Среди невоеннообязанных: " << oldestNonConscript.surname
        << ", возраст: " << oldestNonConscript.age << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    Employee employees[16] = {
        {"Иванов", 25, true}, {"Петров", 30, false}, {"Сидоров", 22, true},
        {"Кузнецов", 35, false}, {"Смирнов", 28, true}, {"Васильев", 32, false},
        {"Попов", 26, true}, {"Новиков", 40, false}, {"Федоров", 24, true},
        {"Морозов", 38, false}, {"Волков", 27, true}, {"Алексеев", 33, false},
        {"Лебедев", 29, true}, {"Семенов", 36, false}, {"Егоров", 31, true},
        {"Павлов", 34, false}
    };

    findAgeExtremes(employees, 16);

    // Дополнительная статистика
    int conscriptCount = 0, nonConscriptCount = 0;
    int conscriptAgeSum = 0, nonConscriptAgeSum = 0;

    for (int i = 0; i < 16; i++) {
        if (employees[i].isConscript) {
            conscriptCount++;
            conscriptAgeSum += employees[i].age;
        }
        else {
            nonConscriptCount++;
            nonConscriptAgeSum += employees[i].age;
        }
    }

    cout << "\nСтатистика:" << endl;
    cout << "Военнообязанных: " << conscriptCount << " чел., средний возраст: "
        << (conscriptCount > 0 ? conscriptAgeSum / conscriptCount : 0) << endl;
    cout << "Невоеннообязанных: " << nonConscriptCount << " чел., средний возраст: "
        << (nonConscriptCount > 0 ? nonConscriptAgeSum / nonConscriptCount : 0) << endl;

    return 0;
}