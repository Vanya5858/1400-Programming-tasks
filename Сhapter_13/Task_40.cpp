#include <iostream>
#include <iomanip>
using namespace std;

struct Luggage {
    int itemsCount;
    double totalWeight; // вес в кг
};

void analyzeLuggage(Luggage luggage[], int n) {
    // а) Пассажиры с более чем двумя вещами
    int countMoreThan2 = 0;
    // б) Пассажир с одной вещью менее 25 кг
    bool hasOneItemLight = false;
    // в) Среднее число вещей
    double avgItems = 0;
    // г) Средний вес одной вещи
    double avgWeightPerItem = 0;

    // Сначала посчитаем общие суммы
    int totalItems = 0;
    double totalWeight = 0;

    for (int i = 0; i < n; i++) {
        totalItems += luggage[i].itemsCount;
        totalWeight += luggage[i].totalWeight;

        // а) Считаем пассажиров с более чем 2 вещами
        if (luggage[i].itemsCount > 2) {
            countMoreThan2++;
        }

        // б) Проверяем, есть ли пассажир с одной вещью менее 25 кг
        if (luggage[i].itemsCount == 1 && luggage[i].totalWeight < 25) {
            hasOneItemLight = true;
        }
    }

    avgItems = (double)totalItems / n;
    avgWeightPerItem = totalWeight / totalItems;

    cout << "а) Пассажиров с более чем 2 вещами: " << countMoreThan2 << endl;

    cout << "б) Пассажир с одной вещью весом менее 25 кг: ";
    if (hasOneItemLight) {
        cout << "да, такой есть" << endl;
    }
    else {
        cout << "нет" << endl;
    }

    // в) Пассажиры, у которых количество вещей больше среднего
    int countAboveAvg = 0;
    for (int i = 0; i < n; i++) {
        if (luggage[i].itemsCount > avgItems) {
            countAboveAvg++;
        }
    }
    cout << "в) Пассажиров с количеством вещей больше среднего ("
        << fixed << setprecision(1) << avgItems << "): " << countAboveAvg << endl;

    // г) Багаж, где средний вес одной вещи отличается от общего среднего не более чем на 0.5 кг
    cout << "г) Багаж со средним весом вещи в пределах ±0.5 кг от общего среднего ("
        << fixed << setprecision(2) << avgWeightPerItem << " кг):" << endl;

    for (int i = 0; i < n; i++) {
        double itemAvgWeight = luggage[i].totalWeight / luggage[i].itemsCount;
        if (abs(itemAvgWeight - avgWeightPerItem) <= 0.5) {
            cout << "   Багаж №" << i + 1 << ": " << luggage[i].itemsCount
                << " вещ., общий вес " << luggage[i].totalWeight
                << " кг, средний вес " << fixed << setprecision(2)
                << itemAvgWeight << " кг" << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Luggage luggage[24] = {
        {2, 30.5}, {1, 22.0}, {3, 45.2}, {1, 18.5}, {4, 60.8},
        {2, 35.0}, {1, 24.3}, {3, 42.1}, {2, 28.7}, {1, 20.9},
        {5, 75.3}, {2, 32.4}, {1, 23.8}, {3, 48.6}, {2, 31.2},
        {1, 19.7}, {4, 55.9}, {2, 29.1}, {1, 21.5}, {3, 47.3},
        {2, 33.8}, {1, 26.4}, {4, 58.2}, {2, 36.7}
    };

    analyzeLuggage(luggage, 24);

    return 0;
}