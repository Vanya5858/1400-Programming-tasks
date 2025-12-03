#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c, d, n, m;

    cout << "Время прибытия поезда (часы минуты): ";
    cin >> a >> b;
    cout << "Время отправления поезда (часы минуты): ";
    cin >> c >> d;
    cout << "Время прихода пассажира (часы минуты): ";
    cin >> n >> m;

    // Переводим все в минуты
    int arrival = a * 60 + b;
    int departure = c * 60 + d;
    int passenger = n * 60 + m;

    if (passenger >= arrival && passenger < departure) {
        cout << "Поезд стоит на платформе\n";
    }
    else {
        cout << "Поезда нет на платформе\n";
    }

    return 0;
}