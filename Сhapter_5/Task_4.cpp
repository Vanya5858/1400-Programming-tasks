#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // а) Числа от 10 до 25
    cout << "а) Числа от 10 до 25:" << endl;
    for (int i = 10; i <= 25; i++) {
        cout << i << " " << fixed << setprecision(1) << i + 0.4 << endl;
    }
    cout << endl;

    // б) Три столбца чисел от 25 до 35
    cout << "б) Три столбца чисел:" << endl;
    for (int i = 25; i <= 35; i++) {
        cout << i << " " << fixed << setprecision(1)
            << i + 0.5 << " " << i - 0.2 << endl;
    }

    return 0;
}