#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 40;
    double speeds[n];

    cout << "Введите максимальную скорость " << n << " автомобилей:\n";
    for (int i = 0; i < n; i++) cin >> speeds[i];

    double maxSpeed = speeds[0];
    int firstIndex = 0, lastIndex = 0;

    for (int i = 1; i < n; i++) {
        if (speeds[i] > maxSpeed) {
            maxSpeed = speeds[i];
            firstIndex = i;
            lastIndex = i;
        }
        else if (speeds[i] == maxSpeed) {
            lastIndex = i;
        }
    }

    cout << "Максимальная скорость: " << maxSpeed << endl;
    cout << "Порядковый номер первого: " << firstIndex + 1 << endl;
    cout << "Порядковый номер последнего: " << lastIndex + 1 << endl;

    return 0;
}