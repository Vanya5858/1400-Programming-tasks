#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n, a;
    int arr[100];  // Достаточно большой массив

    cout << "n (<=100): ";
    cin >> n;

    cout << n << " чисел по убыванию: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "a: ";
    cin >> a;

    for (int i = 0; i < n; i++) {
        if (arr[i] < a) {
            cout << "Индекс: " << i;
            return 0;
        }
    }

    cout << "Нет элементов";
    return 0;
}