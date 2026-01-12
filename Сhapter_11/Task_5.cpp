#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    const int SIZE = 12;
    int height[SIZE];

    // Заполняем массив случайными ростами [163, 190]
    for (int i = 0; i < SIZE; i++) {
        height[i] = 163 + rand() % 28; // 163 до 190 включительно
    }

    // Выводим массив
    cout << "Рост 12 человек (в см):" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Человек " << i + 1 << ": " << height[i] << " см" << endl;
    }

    return 0;
}