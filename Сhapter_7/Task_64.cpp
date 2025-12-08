#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int year, countBefore1990 = 0, countAfter2000 = 0;
    int people;

    cout << "Введите количество людей в группе: ";
    cin >> people;
    cout << "Введите год рождения каждого человека: ";

    for (int i = 0; i < people; i++) {
        cin >> year;
        if (year < 1990)
            countBefore1990++;
        else if (year > 2000)
            countAfter2000++;
    }

    cout << "Родившихся до 1990 года: " << countBefore1990 << endl;
    cout << "Родившихся после 2000 года: " << countAfter2000;
    return 0;
}