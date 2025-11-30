#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите n: ";
    cin >> n;

    int i = 1;
    while (i * i <= n) {
        i++;
    }
    cout << "Первое число, квадрат которого больше " << n << ": " << i << endl;

    return 0;
}