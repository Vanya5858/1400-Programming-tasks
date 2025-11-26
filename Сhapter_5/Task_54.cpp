#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a;
    int n;

    cout << "Введите вещественное число a: ";
    cin >> a;
    cout << "Введите натуральное число n: ";
    cin >> n;

    double result = 1.0;
    cout << "Степени числа " << a << ":\n";
    for (int i = 1; i <= n; i++) {
        result *= a;
        cout << a << "^" << i << " = " << result << endl;
    }

    return 0;
}