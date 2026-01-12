#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << "Подбрасывание монеты: ";

    int coin = rand() % 2;
    if (coin == 0) {
        cout << "Решка (0)" << endl;
    }
    else {
        cout << "Орёл (1)" << endl;
    }

    return 0;
}