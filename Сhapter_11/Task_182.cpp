#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int s, k;
    cout << "\nВведите s и k (s > k, 1-" << n << "): ";
    cin >> s >> k;

    if (s >= 1 && k <= n && s > k) {
        // Сохраняем s-й элемент
        int element = arr[s - 1];

        // Сдвигаем элементы с k-го по (s-1)-й вправо
        for (int i = s - 1; i >= k; i--) {
            arr[i] = arr[i - 1];
        }

        // Помещаем сохраненный элемент на k-ю позицию
        arr[k - 1] = element;

        cout << "После перестановки " << s << "-го элемента на " << k << "-е место: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    else {
        cout << "Неверные значения s и k!\n";
    }

    return 0;
}