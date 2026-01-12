#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << "50 чисел [0,5], выводятся только 0 и 1:" << endl;

    for (int i = 0; i < 50; i++) {
        int num = rand() % 6;
        if (num == 0 || num == 1) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}