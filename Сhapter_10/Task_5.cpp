#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << "30 чисел [0,5], выводятся только нечётные:" << endl;

    for (int i = 0; i < 30; i++) {
        int num = rand() % 6;
        if (num % 2 == 1) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}