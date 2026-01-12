#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    const int SIZE = 20;
    int weight[SIZE];

    // Заполняем массив случайными весами [50, 100]
    for (int i = 0; i < SIZE; i++) {
        weight[i] = 50 + rand() % 51; // 50 до 100 включительно
    }

    // Выводим массив
    cout << "Вес 20 человек (в кг):" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Человек " << i + 1 << ": " << weight[i] << " кг" << endl;
    }

    return 0;
}