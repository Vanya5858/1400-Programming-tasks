#include <iostream>
#include <string>
using namespace std;

struct Magazine {
    string title;
    double price; // цена в рублях
    int circulation; // тираж
};

double averagePriceLowCirculation(Magazine magazines[], int n, int maxCirculation) {
    double totalPrice = 0.0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (magazines[i].circulation < maxCirculation) {
            totalPrice += magazines[i].price;
            count++;
        }
    }

    if (count == 0) return 0.0;
    return totalPrice / count;
}

int main() {
    setlocale(LC_ALL, "RU");

    Magazine magazines[15] = {
        {"Компьютерра", 120.5, 8500},
        {"Наука и жизнь", 95.0, 12500},
        {"За рулем", 150.0, 95000},
        {"Вокруг света", 110.0, 7800},
        {"Домашний очаг", 135.5, 22000},
        {"Мир ПК", 105.0, 6500},
        {"Космополитен", 140.0, 45000},
        {"Популярная механика", 125.0, 8900},
        {"Форбс", 250.0, 55000},
        {"Техника молодежи", 98.0, 5200},
        {"GEO", 180.0, 12000},
        {"National Geographic", 160.0, 35000},
        {"Тайны звезд", 75.5, 18000},
        {"Коммерсантъ", 85.0, 9500},
        {"Игромания", 115.0, 7200}
    };

    double avgPrice = averagePriceLowCirculation(magazines, 15, 10000);

    cout << "Средняя стоимость журналов с тиражом менее 10000 экземпляров: "
        << avgPrice << " рублей" << endl;

    // Дополнительная информация
    int lowCirculationCount = 0;
    for (int i = 0; i < 15; i++) {
        if (magazines[i].circulation < 10000) lowCirculationCount++;
    }
    cout << "Количество журналов с тиражом < 10000: " << lowCirculationCount << endl;

    return 0;
}