#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double distance = 10; // пробег в первый день
    double increase_rate = 0.10; // увеличение на 10% каждый день

    cout << "Пробег лыжника:\n";
    for (int day = 2; day <= 10; day++) {
        distance *= (1 + increase_rate);
        cout << "За " << day << "-й день: " << distance << " км\n";
    }

    // Суммарный путь за первые 7 дней
    distance = 10; // сбрасываем для второй части задачи
    double total_distance = distance;

    for (int day = 2; day <= 7; day++) {
        distance *= (1 + increase_rate);
        total_distance += distance;
    }

    cout << "\nСуммарный путь за первые 7 дней: " << total_distance << " км\n";

    return 0;
}