#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;

    cout << "Введите четное количество элементов: ";
    cin >> n;

    if (n % 2 != 0) {
        cout << "Количество элементов должно быть четным!\n";
        return 1;
    }

    int arr[n];

    cout << "Введите " << n << " элементов массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Копируем массив для каждой операции
    int temp[n];

    // а) Поменять местами половины
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    int half = n / 2;
    for (int i = 0; i < half; i++) {
        int swap = temp[i];
        temp[i] = temp[half + i];
        temp[half + i] = swap;
    }
    cout << "а) После обмена половин: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    // б) Поменять местами первый со вторым, третий с четвертым и т.д.
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    for (int i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            int swap = temp[i];
            temp[i] = temp[i + 1];
            temp[i + 1] = swap;
        }
    }
    cout << "б) После обмена пар: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    // в) Поменять местами половины через зеркальный обмен
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    for (int i = 0; i < half; i++) {
        int swap = temp[i];
        temp[i] = temp[n - 1 - i];
        temp[n - 1 - i] = swap;
    }
    cout << "в) После зеркального обмена: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    return 0;
}