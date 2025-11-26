#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // а) Числа от 21 до 10 в убывающем порядке
    cout << "а) Числа от 21 до 10:\n";
    for (int i = 21; i >= 10; i--) {
        cout << i << " " << fixed << setprecision(1) << i - 1.8 << endl;
    }
    cout << endl;

    // б) Три столбца чисел от 45 до 25 в убывающем порядке
    cout << "б) Три столбца чисел:\n";
    for (int i = 45; i >= 25; i--) {
        cout << i << " " << fixed << setprecision(1)
            << i - 0.5 << " " << i - 0.8 << endl;
    }

    return 0;
}