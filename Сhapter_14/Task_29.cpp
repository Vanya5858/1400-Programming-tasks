#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 10;

// Функция проверки наличия числа в массиве
bool isNumberInArray(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) return true;
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    int m1[SIZE], m2[SIZE], m3[SIZE];

    // Заполняем массивы случайными числами
    cout << "Массив m1: ";
    for (int i = 0; i < SIZE; i++) {
        m1[i] = rand() % 20;
        cout << m1[i] << " ";
    }

    cout << "\nМассив m2: ";
    for (int i = 0; i < SIZE; i++) {
        m2[i] = rand() % 20;
        cout << m2[i] << " ";
    }

    cout << "\nМассив m3: ";
    for (int i = 0; i < SIZE; i++) {
        m3[i] = rand() % 20;
        cout << m3[i] << " ";
    }

    // Считаем совпадения
    int count1 = 0, count2 = 0;

    for (int i = 0; i < SIZE; i++) {
        if (isNumberInArray(m3, SIZE, m1[i])) {
            count1++;
        }
        if (isNumberInArray(m3, SIZE, m2[i])) {
            count2++;
        }
    }

    cout << "\n\nРезультат:" << endl;
    cout << "Чисел из m1, имеющихся в m3: " << count1 << endl;
    cout << "Чисел из m2, имеющихся в m3: " << count2 << endl;

    if (count1 > count2) {
        cout << "В массиве m1 больше чисел, имеющихся в m3" << endl;
    }
    else if (count2 > count1) {
        cout << "В массиве m2 больше чисел, имеющихся в m3" << endl;
    }
    else {
        cout << "Количество одинаково" << endl;
    }

    return 0;
}