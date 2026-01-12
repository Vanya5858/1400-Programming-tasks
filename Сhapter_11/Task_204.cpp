#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n, a;
    int arr[100];

    cout << "n: ";
    cin >> n;

    cout << n << " чисел по убыванию: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "a: ";
    cin >> a;

    int firstLessIndex = -1;

    // Находим первый элемент < a
    for (int i = 0; i < n; i++) {
        if (arr[i] < a) {
            firstLessIndex = i;
            break;
        }
    }

    if (firstLessIndex == -1) {
        cout << "Нет элементов, меньших " << a;
        return 0;
    }

    // 1. Элементы после первого < a
    cout << "Элементы после первого < " << a << ": ";
    if (firstLessIndex + 1 < n) {
        for (int i = firstLessIndex + 1; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
    else {
        cout << "нет";
    }

    // 2. Все элементы > a
    cout << "\nВсе элементы > " << a << ": ";
    bool foundGreater = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] > a) {
            cout << arr[i] << " ";
            foundGreater = true;
        }
    }

    if (!foundGreater) {
        cout << "нет";
    }

    return 0;
}