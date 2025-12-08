#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int residents, sumEven = 0, sumOdd = 0;
    int houseCount;

    cout << "Введите количество домов на улице: ";
    cin >> houseCount;
    cout << "Введите число жителей в каждом доме: ";

    for (int house = 1; house <= houseCount; house++) {
        cin >> residents;
        if (house % 2 == 0)
            sumEven += residents;  // чётные номера - одна сторона
        else
            sumOdd += residents;   // нечётные номера - другая сторона
    }

    if (sumEven > sumOdd)
        cout << "Больше жителей на стороне с чётными номерами домов";
    else if (sumOdd > sumEven)
        cout << "Больше жителей на стороне с нечётными номерами домов";
    else
        cout << "На обеих сторонах одинаковое количество жителей";

    return 0;
}