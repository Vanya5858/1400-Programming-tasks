#include <iostream>
#include <climits>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 40;
    double speeds[n];

    cout << "Введите максимальную скорость " << n << " автомобилей:\n";
    for (int i = 0; i < n; i++) cin >> speeds[i];

    double max1 = -1, max2 = -1;

    for (int i = 0; i < n; i++) {
        if (speeds[i] > max1) {
            max2 = max1;
            max1 = speeds[i];
        }
        else if (speeds[i] > max2 && speeds[i] < max1) {
            max2 = speeds[i];
        }
        else if (speeds[i] == max1 && max2 == -1) {
            max2 = speeds[i];
        }
    }

    cout << "Две самые высокие скорости: " << max1 << " и " << max2 << endl;

    return 0;
}