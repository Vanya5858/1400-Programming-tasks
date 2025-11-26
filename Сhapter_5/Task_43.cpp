#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;

    // Первый член последовательности
    double a_prev = 1.0; // a0 = 1

    cout << fixed << setprecision(6);
    cout << "a0 = " << a_prev << endl;

    // Вычисляем последующие члены
    for (int k = 1; k <= n; k++) {
        double a_current = k * a_prev + 1.0 / k;
        cout << "a" << k << " = " << a_current << endl;
        a_prev = a_current;
    }

    return 0;
}