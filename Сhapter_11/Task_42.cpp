#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    double arr[n];

    cout << "Введите " << n << " вещественных чисел:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double sum = 0, prod = 1, sumSquares = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        prod *= arr[i];
        sumSquares += arr[i] * arr[i];
    }

    cout << "Сумма всех элементов: " << sum << endl;
    cout << "Произведение всех элементов: " << prod << endl;
    cout << "Сумма квадратов всех элементов: " << sumSquares << endl;

    double sumFirstSix = 0;
    for (int i = 0; i < 6; i++) sumFirstSix += arr[i];
    cout << "Сумма первых шести элементов: " << sumFirstSix << endl;

    int k1, k2;
    cout << "Введите k1 и k2 (k2 > k1): ";
    cin >> k1 >> k2;
    double sumRange = 0;
    for (int i = k1; i <= k2; i++) sumRange += arr[i];
    cout << "Сумма элементов с " << k1 << " по " << k2 << ": " << sumRange << endl;

    double avg = sum / n;
    cout << "Среднее арифметическое всех элементов: " << avg << endl;

    int s1, s2;
    cout << "Введите s1 и s2 (s2 > s1): ";
    cin >> s1 >> s2;
    double sumRange2 = 0;
    for (int i = s1; i <= s2; i++) sumRange2 += arr[i];
    cout << "Среднее арифметическое элементов с " << s1 << " по " << s2 << ": " << sumRange2 / (s2 - s1 + 1) << endl;

    return 0;
}