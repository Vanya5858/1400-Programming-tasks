#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 20;
    int a[SIZE], even[10], odd[10];

    cout << "Введите " << SIZE << " элементов массива:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    int evenIndex = 0, oddIndex = 0;

    // Разделяем элементы
    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {  // четный индекс (0, 2, 4...)
            even[evenIndex] = a[i];
            evenIndex++;
        }
        else {           // нечетный индекс (1, 3, 5...)
            odd[oddIndex] = a[i];
            oddIndex++;
        }
    }

    cout << "\nМассив с четными индексами:\n";
    for (int i = 0; i < 10; i++) {
        cout << "even[" << i << "] = " << even[i] << endl;
    }

    cout << "\nМассив с нечетными индексами:\n";
    for (int i = 0; i < 10; i++) {
        cout << "odd[" << i << "] = " << odd[i] << endl;
    }

    return 0;
}