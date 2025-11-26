#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // а) Числа от 21 до 35
    cout << "а) Числа от 21 до 35:\n";
    for (int i = 21; i <= 35; i++) {
        cout << i << " " << fixed << setprecision(1) << i - 0.6 << endl;
    }
    cout << endl;

    // б) Три столбца чисел от 16 до 24
    cout << "б) Три столбца чисел:\n";
    for (int i = 16; i <= 24; i++) {
        cout << i << " " << fixed << setprecision(1) << i - 0.5 << " " << i + 0.8 << endl;
    }

    return 0;
}