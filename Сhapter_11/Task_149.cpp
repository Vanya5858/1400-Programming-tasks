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

    // а) Увеличить в 2 раза
    cout << "\na) Элементы, увеличенные в 2 раза:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] * 2 << " ";
    }
    cout << endl;

    // б) Уменьшить на число А
    double A;
    cout << "\nВведите число A: ";
    cin >> A;

    cout << "б) Элементы, уменьшенные на " << A << ":\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] - A << " ";
    }
    cout << endl;

    // в) Разделить на первый элемент
    if (arr[0] != 0) {
        cout << "\nв) Элементы, разделенные на первый элемент (" << arr[0] << "):\n";
        for (int i = 0; i < n; i++) {
            cout << arr[i] / arr[0] << " ";
        }
        cout << endl;
    }
    else {
        cout << "\nв) Нельзя делить на первый элемент (он равен 0)!\n";
    }

    return 0;
}