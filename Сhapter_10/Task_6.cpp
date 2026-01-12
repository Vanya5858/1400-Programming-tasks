#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << "50 чисел 0 или 1, подсчёт количества:" << endl;

    int zeros = 0, ones = 0;
    for (int i = 0; i < 50; i++) {
        int num = rand() % 2;
        cout << num << " ";
        if (num == 0) zeros++;
        else ones++;
    }
    cout << endl;
    cout << "Нулей: " << zeros << ", Единиц: " << ones << endl;

    return 0;
}