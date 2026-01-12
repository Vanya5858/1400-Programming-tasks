#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 10;
    double arr[SIZE];

    // Заполняем массив
    cout << "Введите " << SIZE << " вещественных чисел:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // а) Квадратный корень из любого элемента массива
    int index1;
    cout << "\nа) Введите индекс элемента для извлечения квадратного корня (0-" << SIZE - 1 << "): ";
    cin >> index1;

    if (index1 >= 0 && index1 < SIZE) {
        if (arr[index1] >= 0) {
            cout << "sqrt " << arr[index1] << " = " << sqrt(arr[index1]) << endl;
        }
        else {
            cout << "Нельзя извлечь корень из отрицательного числа" << endl;
        }
    }
    else {
        cout << "Неверный индекс!" << endl;
    }

    // б) Среднее арифметическое двух любых элементов массива
    int index2, index3;
    cout << "\nб) Введите индексы двух элементов для среднего арифметического:" << endl;
    cout << "Первый индекс (0-" << SIZE - 1 << "): ";
    cin >> index2;
    cout << "Второй индекс (0-" << SIZE - 1 << "): ";
    cin >> index3;

    if (index2 >= 0 && index2 < SIZE && index3 >= 0 && index3 < SIZE) {
        double average = (arr[index2] + arr[index3]) / 2;
        cout << "Среднее арифметическое arr[" << index2 << "] и arr[" << index3 << "]:" << endl;
        cout << "(" << arr[index2] << " + " << arr[index3] << ") / 2 = " << average << endl;
    }
    else {
        cout << "Неверные индексы!" << endl;
    }

    return 0;
}