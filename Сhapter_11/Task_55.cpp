#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 30;
    double weight[n];
    double maxWeight;

    cout << "Введите грузоподъёмность автомобиля (кг): ";
    cin >> maxWeight;

    cout << "Введите массу каждого из " << n << " предметов (кг):\n";
    for (int i = 0; i < n; i++) cin >> weight[i];

    double total = 0;
    for (int i = 0; i < n; i++) total += weight[i];

    if (total <= maxWeight)
        cout << "Общая масса не превышает грузоподъёмность.\n";
    else
        cout << "Общая масса превышает грузоподъёмность.\n";

    return 0;
}