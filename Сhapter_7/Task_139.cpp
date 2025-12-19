#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int N = 20;
    double speeds[N];

    cout << "Введите максимальные скорости 20 марок автомобилей: ";
    for (int i = 0; i < N; i++) {
        cin >> speeds[i];
    }

    double maxSpeed = speeds[0];
    for (int i = 1; i < N; i++) {
        if (speeds[i] > maxSpeed) {
            maxSpeed = speeds[i];
        }
    }

    cout << "Максимальная скорость: " << maxSpeed << " км/ч\n";
    return 0;
}