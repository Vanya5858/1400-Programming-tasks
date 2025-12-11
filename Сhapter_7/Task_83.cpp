#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, num;
    bool hasEven = false;

    cout << "Введите количество чисел в наборе: ";
    cin >> n;
    cout << "Введите " << n << " целых чисел: ";

    for (int i = 0; i < n && !hasEven; i++) {
        cin >> num;
        if (num % 2 == 0)
            hasEven = true;
    }

    // Досчитываем остальные числа, если нужно
    for (int i = (hasEven ? n : 0); i < n; i++) {
        cin >> num;
    }

    cout << (hasEven ? "В наборе есть чётное число" : "В наборе нет чётных чисел");
    return 0;
}