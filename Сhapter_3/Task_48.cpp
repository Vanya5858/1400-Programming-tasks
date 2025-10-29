#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_ALL, "RU");
    double y;
    int hours, minutes;
    cout << "Введите значение градусов(0 <= y < 360): ";
    cin >> y;

    if (y < 0 || y >= 360) {
        cout << "Ошибка. Градусы указаны неверно!\n\n";
        return 1;
    }

    hours = y / 30;
    minutes = fmod(y, 30) * 2;
    
    cout << "\nC начала суток прошло: " << hours << " часов; " << minutes << " минут.\n\n";
    return 0;
}