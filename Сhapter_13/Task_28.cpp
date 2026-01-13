#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Item {
    string material;
    double mass; 
    double volume; 
};

double calculateDensity(Item item) {
    return item.mass / item.volume; 
}

double findMaxDensity(Item items[], int n) {
    double maxDensity = 0.0;

    for (int i = 0; i < n; i++) {
        double density = calculateDensity(items[i]);
        if (density > maxDensity) {
            maxDensity = density;
        }
    }

    return maxDensity;
}

int main() {
    setlocale(LC_ALL, "RU");

    Item items[30] = {
        {"Сталь", 7.85, 0.001}, {"Алюминий", 2.70, 0.001}, {"Медь", 8.96, 0.001},
        {"Свинец", 11.34, 0.001}, {"Дерево", 0.70, 0.001}, {"Стекло", 2.50, 0.001},
        {"Вода", 1.00, 0.001}, {"Лед", 0.92, 0.001}, {"Золото", 19.32, 0.001},
        {"Серебро", 10.49, 0.001}, {"Чугун", 7.20, 0.001}, {"Бронза", 8.80, 0.001},
        {"Латунь", 8.50, 0.001}, {"Олово", 7.31, 0.001}, {"Никель", 8.90, 0.001},
        {"Цинк", 7.13, 0.001}, {"Титан", 4.51, 0.001}, {"Вольфрам", 19.25, 0.001},
        {"Платина", 21.45, 0.001}, {"Мрамор", 2.70, 0.001}, {"Гранит", 2.60, 0.001},
        {"Песок", 1.60, 0.001}, {"Бетон", 2.40, 0.001}, {"Кирпич", 1.80, 0.001},
        {"Полиэтилен", 0.95, 0.001}, {"Полипропилен", 0.90, 0.001}, {"Резина", 1.20, 0.001},
        {"Бумага", 0.80, 0.001}, {"Хлопок", 1.50, 0.001}, {"Шерсть", 1.30, 0.001}
    };

    double maxDensity = findMaxDensity(items, 30);

    cout << "Максимальная плотность материала: "
        << fixed << setprecision(2) << maxDensity << " кг/м^3" << endl;

    // Вывод материалов с максимальной плотностью
    cout << "\nМатериалы с максимальной плотностью:" << endl;
    cout << "====================================" << endl;
    for (int i = 0; i < 30; i++) {
        if (calculateDensity(items[i]) == maxDensity) {
            cout << items[i].material << ": "
                << fixed << setprecision(2) << maxDensity << " кг/м^3" << endl;
        }
    }

    return 0;
}