#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    double mass, total = 0;

    cout << "Введите грузоподъёмность автомобиля (кг): ";
    double capacity;
    cin >> capacity;

    cout << "Введите количество грузов: ";
    cin >> n;
    cout << "Введите массу каждого груза: ";

    for (int i = 0; i < n; i++) {
        cin >> mass;
        total += mass;
    }

    cout << (total <= capacity ? "Не превысило" : "Превысило");
    return 0;
}