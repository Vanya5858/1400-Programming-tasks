#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, a, b, c, countValid = 0;

    cout << "Введите количество троек n: ";
    cin >> n;
    cout << "Введите " << n << " троек чисел (a <= b <= c):\n";

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a + b > c && a + c > b && b + c > a)
            countValid++;
    }

    cout << "Количество троек, из которых можно построить треугольник: " << countValid;
    return 0;
}