#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int n;

    cout << "Введите натуральное число n (1 < n <= 10): ";
    cin >> n;

    long long sum = 0;
    long long factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += factorial;
    }

    cout << "1! + 2! + ... + " << n << "! = " << sum << endl;

    return 0;
}