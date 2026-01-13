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

Item findMinDensityMaterial(Item items[], int n) {
    Item minItem = items[0];
    double minDensity = calculateDensity(items[0]);

    for (int i = 1; i < n; i++) {
        double density = calculateDensity(items[i]);
        if (density < minDensity) {
            minDensity = density;
            minItem = items[i];
        }
    }

    return minItem;
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

    Item minDensityItem = findMinDensityMaterial(items, 30);
    double minDensity = calculateDensity(minDensityItem);

    cout << "Материал с минимальной плотностью: " << minDensityItem.material << endl;
    cout << "Плотность: " << fixed << setprecision(2) << minDensity << " кг/м^3" << endl;
    cout << "Масса: " << minDensityItem.mass << " кг" << endl;
    cout << "Объем: " << minDensityItem.volume << " м^3" << endl;

    // Дополнительная информация: топ-3 материалов с наименьшей плотностью
    cout << "\nТоп-3 материалов с наименьшей плотностью:" << endl;
    cout << "========================================" << endl;

    // Создаем массив для сортировки плотностей
    struct DensityInfo {
        string material;
        double density;
    };

    DensityInfo densities[30];
    for (int i = 0; i < 30; i++) {
        densities[i].material = items[i].material;
        densities[i].density = calculateDensity(items[i]);
    }

    // Простая сортировка пузырьком
    for (int i = 0; i < 29; i++) {
        for (int j = 0; j < 29 - i; j++) {
            if (densities[j].density > densities[j + 1].density) {
                swap(densities[j], densities[j + 1]);
            }
        }
    }

    // Вывод топ-3
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << densities[i].material << ": "
            << fixed << setprecision(2) << densities[i].density << " кг/м^3" << endl;
    }

    return 0;
}