#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество пар n: ";
    cin >> n;

    double maxSum = -1e9, minProd = 1e9;

    cout << "Введите " << n << " пар чисел (a b):\n";
    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;

        double sum = a + b;
        double prod = a * b;

        if (sum > maxSum) maxSum = sum;
        if (prod < minProd) minProd = prod;
    }

    cout << "Максимальная сумма: " << maxSum << endl;
    cout << "Минимальное произведение: " << minProd << endl;
    return 0;
}