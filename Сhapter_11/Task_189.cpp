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

    // а) Номер первого элемента, равного 5 (без условного оператора)
    int firstIndex = -1;
    for (int i = 0; i < n; i++) {
        // Используем арифметику вместо if
        firstIndex = (firstIndex == -1 && arr[i] == 5) ? i : firstIndex;
    }

    // б) Номер последнего элемента, равного 5 (без условного оператора)
    int lastIndex = -1;
    for (int i = 0; i < n; i++) {
        // Используем арифметику вместо if
        lastIndex = (arr[i] == 5) ? i : lastIndex;
    }

    cout << "\nа) Номер первого элемента, равного 5: ";
    if (firstIndex != -1) cout << firstIndex + 1 << endl;
    else cout << "не найден\n";

    cout << "б) Номер последнего элемента, равного 5: ";
    if (lastIndex != -1) cout << lastIndex + 1 << endl;
    else cout << "не найден\n";

    return 0;
}