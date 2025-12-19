#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int SIZE = 30;
    int arr[SIZE];
    
    cout << "Введите 30 чисел (неубывающая последовательность): ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    int countDistinct = 1; // первый элемент уже учтён
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] != arr[i - 1]) {
            countDistinct++;
        }
    }

    cout << "Количество различных чисел: " << countDistinct << endl;
    return 0;
}