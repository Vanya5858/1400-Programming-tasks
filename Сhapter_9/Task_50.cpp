#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите n: ";
    cin >> n;

    cout << "\nЧисла, взаимно простые с " << n << " (НОД = 1):" << endl;

    int found = 0;

    for (int i = 1; i < n; i++) {
        // Проверяем НОД(i, n)
        int a = i, b = n;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        if (a == 1) {  // НОД = 1
            cout << i << " ";
            found++;

            if (found % 10 == 0) {
                cout << endl;
            }
        }
    }

    cout << "\n\nНайдено: " << found << " чисел" << endl;

    return 0;
}