#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n, k;
    int arr[100];

    cout << "Количество элементов (<=100): ";
    cin >> n;

    cout << "Введите " << n << " чисел по возрастанию: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Введите число k: ";
    cin >> k;

    // Ищем первый элемент > k
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Нет элементов, больших " << k;
    }
    else {
        cout << "Элементы после первого > " << k << ":\n";
        for (int i = index + 1; i < n; i++) {
            cout << arr[i] << " ";
        }
        if (index + 1 >= n) {
            cout << "(нет элементов после него)";
        }
    }

    return 0;
}