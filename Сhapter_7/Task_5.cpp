#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double salary, total = 0;
    int employees;

    cout << "Введите количество сотрудников: ";
    cin >> employees;
    cout << "Введите зарплату каждого: ";

    for (int i = 0; i < employees; i++) {
        cin >> salary;
        total += salary;
    }

    cout << "Общая сумма выплат = " << total;
    return 0;
}