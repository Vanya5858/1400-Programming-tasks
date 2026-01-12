#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    const int SIZE = 15;
    double arr[SIZE];

    // а) Вещественные значения от 0 до 1
    cout << "\nа) Вещественные значения [0, 1):" << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (double)rand() / RAND_MAX;
        cout << arr[i] << " ";
    }
    cout << endl;

    // б) Вещественные значения [22, 23)
    cout << "\nб) Вещественные значения [22, 23):" << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 22 + (double)rand() / RAND_MAX;
        cout << arr[i] << " ";
    }
    cout << endl;

    // в) Вещественные значения [0, 10)
    cout << "\nв) Вещественные значения [0, 10):" << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 10 * (double)rand() / RAND_MAX;
        cout << arr[i] << " ";
    }
    cout << endl;

    // г) Вещественные значения [-50, 50)
    cout << "\nг) Вещественные значения [-50, 50):" << endl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = -50 + 100 * (double)rand() / RAND_MAX;
        cout << arr[i] << " ";
    }
    cout << endl;

    // д) Целые значения [0, 10]
    cout << "\nд) Целые значения [0, 10]:" << endl;
    int intArr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        intArr[i] = rand() % 11;
        cout << intArr[i] << " ";
    }
    cout << endl;

    return 0;
}