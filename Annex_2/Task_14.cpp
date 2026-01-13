#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int k = 0;
    int s = 0;

    while (s < 1024) {
        s = s + 10;
        k = k + 1;
    }

    cout << "k = " << k << endl;

    return 0;
}