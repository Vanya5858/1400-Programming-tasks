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

    // Выводим исходный массив
    cout << "\nИсходный массив: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Копируем массив для каждой операции
    int temp[n];

    // а) Поменять местами второй и пятый элементы
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    if (n >= 5) {
        int swap = temp[1];  // второй элемент (индекс 1)
        temp[1] = temp[4];   // пятый элемент (индекс 4)
        temp[4] = swap;
        cout << "а) После обмена 2-го и 5-го элементов: ";
        for (int i = 0; i < n; i++) cout << temp[i] << " ";
        cout << endl;
    }

    // б) Поменять местами m-й и n-й элементы
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    int m, n_pos;
    cout << "\nВведите номера элементов m и n для обмена (1-" << n << "): ";
    cin >> m >> n_pos;
    if (m >= 1 && m <= n && n_pos >= 1 && n_pos <= n && m != n_pos) {
        int swap = temp[m - 1];
        temp[m - 1] = temp[n_pos - 1];
        temp[n_pos - 1] = swap;
        cout << "б) После обмена " << m << "-го и " << n_pos << "-го элементов: ";
        for (int i = 0; i < n; i++) cout << temp[i] << " ";
        cout << endl;
    }

    // в) Поменять местами третий и максимальный элементы
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    if (n >= 3) {
        int max = temp[0];
        int maxIndex = 0;
        for (int i = 1; i < n; i++) {
            if (temp[i] > max) {
                max = temp[i];
                maxIndex = i;
            }
        }
        int swap = temp[2];  // третий элемент
        temp[2] = temp[maxIndex];
        temp[maxIndex] = swap;
        cout << "в) После обмена 3-го и максимального элементов: ";
        for (int i = 0; i < n; i++) cout << temp[i] << " ";
        cout << endl;
    }

    // г) Поменять местами первый и минимальный элементы
    for (int i = 0; i < n; i++) temp[i] = arr[i];
    int min = temp[0];
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (temp[i] <= min) {  // <= чтобы взять последний минимальный
            min = temp[i];
            minIndex = i;
        }
    }
    int swap = temp[0];
    temp[0] = temp[minIndex];
    temp[minIndex] = swap;
    cout << "г) После обмена 1-го и минимального элементов: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;

    return 0;
}