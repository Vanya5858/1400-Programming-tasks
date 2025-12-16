#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int SIZE = 15;
    double a[SIZE]; 
    
    cout << "Введите 15 вещественных чисел: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> a[i];
    }

    int firstNeg = -1;
    for (int i = 0; i < SIZE; i++) {
        if (a[i] < 0) {
            firstNeg = i + 1;
            break;
        }
    }

    if (firstNeg != -1) {
        cout << "Номер первого отрицательного числа: " << firstNeg << endl;
    }
    else {
        cout << "Отрицательных чисел нет\n";
    }

    return 0;
}