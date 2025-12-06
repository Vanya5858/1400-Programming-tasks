#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, b, sum = 0;

    cout << "Введите число n: ";
    cin >> n;

    cout << "Введите вашу последовательность из 10 чисел через пробел: ";

    for (int i = 0; i < 10; i++) {
        cin >> b;
        sum += b;
    }

    cout << (sum < n ? "Сумма меньше n" : "Сумма не меньше n");
    return 0;
}