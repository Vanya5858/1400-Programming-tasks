#include <iostream>
#include <string>
using namespace std;

struct Train {
    int number;
    string destination;
    int arrivalHour;
    int arrivalMinute;
    int departureHour;
    int departureMinute;
};

bool isTrainAtStation(Train train, int currentHour, int currentMinute) {
    // Преобразуем время в минуты от начала суток
    int currentTime = currentHour * 60 + currentMinute;
    int arrivalTime = train.arrivalHour * 60 + train.arrivalMinute;
    int departureTime = train.departureHour * 60 + train.departureMinute;

    // Если поезд прибыл и еще не уехал
    return (currentTime >= arrivalTime && currentTime < departureTime);
}

void findTrainsAtStation(Train trains[], int n, int currentHour, int currentMinute) {
    cout << "Поезда на станции в " << currentHour << ":"
        << (currentMinute < 10 ? "0" : "") << currentMinute << ":" << endl;
    cout << "=========================================" << endl;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (isTrainAtStation(trains[i], currentHour, currentMinute)) {
            cout << "Поезд №" << trains[i].number << " "
                << trains[i].destination << endl;
            cout << "  Прибытие: " << trains[i].arrivalHour << ":"
                << (trains[i].arrivalMinute < 10 ? "0" : "") << trains[i].arrivalMinute;
            cout << ", Отправление: " << trains[i].departureHour << ":"
                << (trains[i].departureMinute < 10 ? "0" : "") << trains[i].departureMinute << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "На станции нет поездов" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Train trains[25] = {
        {1, "Москва-Омск", 8, 30, 8, 45},
        {2, "Санкт-Петербург-Новосибирск", 9, 15, 9, 30},
        {3, "Екатеринбург-Краснодар", 10, 0, 10, 20},
        {4, "Казань-Сочи", 11, 45, 12, 0},
        {5, "Нижний Новгород-Ростов", 12, 30, 12, 50},
        {6, "Самара-Владивосток", 13, 20, 13, 40},
        {7, "Челябинск-Минск", 14, 10, 14, 30},
        {8, "Уфа-Калининград", 15, 5, 15, 25},
        {9, "Красноярск-Астрахань", 16, 50, 17, 10},
        {10, "Воронеж-Хабаровск", 17, 40, 18, 0},
        {11, "Пермь-Ярославль", 18, 35, 18, 55},
        {12, "Волгоград-Иркутск", 19, 25, 19, 45},
        {13, "Омск-Москва", 20, 15, 20, 35},
        {14, "Новосибирск-Санкт-Петербург", 21, 0, 21, 20},
        {15, "Краснодар-Екатеринбург", 22, 55, 23, 15},
        {16, "Сочи-Казань", 23, 30, 23, 50},
        {17, "Ростов-Нижний Новгород", 0, 45, 1, 5},
        {18, "Владивосток-Самара", 1, 20, 1, 40},
        {19, "Минск-Челябинск", 2, 10, 2, 30},
        {20, "Калининград-Уфа", 3, 5, 3, 25},
        {21, "Астрахань-Красноярск", 4, 40, 5, 0},
        {22, "Хабаровск-Воронеж", 5, 25, 5, 45},
        {23, "Ярославль-Пермь", 6, 15, 6, 35},
        {24, "Иркутск-Волгоград", 7, 0, 7, 20},
        {25, "Тюмень-Оренбург", 8, 55, 9, 15}
    };

    // Проверка для разных времен
    findTrainsAtStation(trains, 25, 8, 40);  // Утро
    cout << endl;
    findTrainsAtStation(trains, 25, 14, 15); // День
    cout << endl;
    findTrainsAtStation(trains, 25, 1, 30);  // Ночь

    return 0;
}