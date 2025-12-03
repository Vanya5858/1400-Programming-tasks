#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите возраст в месяцах (1-1188): ";
    cin >> n;

    int years = n / 12;
    int months = n % 12;

    cout << years << " год";

    if (years % 10 == 1 && years != 11) {
        // ничего
    }
    else if (years % 10 >= 2 && years % 10 <= 4 && (years < 10 || years > 20)) {
        cout << "а";
    }
    else {
        cout << "ов";
    }

    if (months > 0) {
        cout << " " << months << " месяц";

        if (months % 10 == 1 && months != 11) {
            // ничего
        }
        else if (months % 10 >= 2 && months % 10 <= 4 && (months < 10 || months > 20)) {
            cout << "а";
        }
        else {
            cout << "ев";
        }
    }
    else {
        cout << " ровно";
    }
    cout << endl;

    return 0;
}