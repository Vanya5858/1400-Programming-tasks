#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    double arr[n];

    cout << "Введите " << n << " вещественных чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    double sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    double avg = sum / n;

    int closestIndex = 0;
    double minDiff = fabs(arr[0] - avg);

    for (int i = 1; i < n; i++) {
        double diff = fabs(arr[i] - avg);
        if (diff < minDiff) {
            minDiff = diff;
            closestIndex = i;
        }
    }

    cout << "Среднее значение: " << avg << endl;
    cout << "Наиболее близкий элемент: arr[" << closestIndex << "] = " << arr[closestIndex] << endl;

    return 0;
}