#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n, p;
    cout << "Введите n: ";
    cin >> n;
    cout << "Введите p: ";
    cin >> p;

    cout << "\nЧисла меньше " << n << ", взаимно простые с " << p << ":" << endl;

    int count = 0;

    for (int i = 1; i < n; i++) {
        // Находим НОД(i, p)
        int a = i, b = p;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        // Если НОД = 1, числа взаимно просты
        if (a == 1) {
            cout << i << " ";
            count++;

            if (count % 10 == 0) {
                cout << endl;
            }
        }
    }

    cout << "\n\nВсего найдено: " << count << " чисел" << endl;

    return 0;
}