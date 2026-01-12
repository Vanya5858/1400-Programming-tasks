#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];

    int count = 0;
    cout << "Элементы, большие суммы всех элементов (" << sum << "): ";
    for (int i = 0; i < n; i++) {
        if (arr[i] > sum) {
            cout << arr[i] << "(индекс " << i << ") ";
            count++;
        }
    }

    if (count == 0) cout << "нет";
    cout << endl << "Количество таких элементов: " << count << endl;

    return 0;
}