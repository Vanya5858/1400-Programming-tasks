#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k, s;
    cout << "Введите индексы k и s (от 0 до " << n - 1 << "): ";
    cin >> k >> s;

    if (arr[s] > 0)
        cout << "Элемент с индексом " << s << " положительный.\n";
    else
        cout << "Элемент с индексом " << s << " не положительный.\n";

    if (arr[k] % 2 == 0)
        cout << "Элемент с индексом " << k << " чётный.\n";
    else
        cout << "Элемент с индексом " << k << " нечётный.\n";

    if (arr[k] > arr[s])
        cout << "Элемент с индексом " << k << " больше.\n";
    else if (arr[k] < arr[s])
        cout << "Элемент с индексом " << s << " больше.\n";
    else
        cout << "Элементы равны.\n";

    return 0;
}