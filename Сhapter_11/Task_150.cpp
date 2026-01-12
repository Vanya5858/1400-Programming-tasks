#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    double arr[n];

    cout << "Введите " << n << " элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // а) Уменьшить на 20
    cout << "\na) Элементы, уменьшенные на 20:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] - 20 << " ";
    }
    cout << endl;

    // б) Умножить на последний элемент
    double lastElement = arr[n - 1];
    cout << "\nб) Элементы, умноженные на последний элемент (" << lastElement << "):\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] * lastElement << " ";
    }
    cout << endl;

    // в) Увеличить на число В
    double B;
    cout << "\nВведите число B: ";
    cin >> B;

    cout << "в) Элементы, увеличенные на " << B << ":\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] + B << " ";
    }
    cout << endl;

    return 0;
}