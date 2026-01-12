#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    int n, a, b;
    cout << "Введите количество элементов n: ";
    cin >> n;
    cout << "Введите границы интервала a и b: ";
    cin >> a >> b;

    if (n <= 0) {
        cout << "Некорректный размер массива" << endl;
        return 0;
    }

    int* arr = new int[n]; // Динамический массив

    // Заполняем массив случайными числами [a, b]
    for (int i = 0; i < n; i++) {
        arr[i] = a + rand() % (b - a + 1);
    }

    // Выводим массив
    cout << "\nМассив из " << n << " случайных чисел [" << a << ", " << b << "]:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << endl;

    delete[] arr; // Освобождаем память

    return 0;
}