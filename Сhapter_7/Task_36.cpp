#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double area, yield, totalWheat = 0, totalArea = 0;

    cout << "Введите данные по 10 районам (площадь в га, урожайность в ц/га):\n";

    for (int i = 0; i < 10; i++) {
        cin >> area >> yield;
        totalWheat += area * yield;
        totalArea += area;
    }

    cout << "Общее количество пшеницы = " << totalWheat << " ц\n";
    cout << "Средняя урожайность по области = " << totalWheat / totalArea << " ц/га";

    return 0;
}