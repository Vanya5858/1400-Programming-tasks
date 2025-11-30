#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num = 191;
    while (num % 17 != 0) {
        num++;
    }
    cout << "Минимальное число больше 190, делящееся на 17: " << num << endl;

    return 0;
}