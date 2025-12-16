#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int cars = 0, bikes = 0;
    double sumCars = 0, sumBikes = 0;
    double cost;

    cout << "Вводите стоимости (в $), 0 для окончания: ";
    while (true) {
        cin >> cost;
        if (cost == 0) break;

        if (cost > 5000) {
            sumCars += cost;
            cars++;
        }
        else {
            sumBikes += cost;
            bikes++;
        }
    }

    if (cars > 0 && bikes > 0) {
        double avgCars = sumCars / cars;
        double avgBikes = sumBikes / bikes;
        bool moreThan3Times = avgCars > avgBikes * 3;
        cout << "Средняя стоимость авто: " << avgCars << endl;
        cout << "Средняя стоимость мотоциклов: " << avgBikes << endl;
        cout << "Средняя стоимость авто > средней стоимости мотоциклов в 3 раза: "
            << (moreThan3Times ? "Да" : "Нет") << endl;
    }
    else {
        cout << "Недостаточно данных\n";
    }

    return 0;
}