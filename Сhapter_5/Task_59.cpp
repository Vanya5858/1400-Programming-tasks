#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;

    cout << "Введите натуральное число n: ";
    cin >> n;

    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << n << "! = " << factorial << endl;

    return 0;
}