#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (long long)i * i;
    }

    cout << "1^2 + 2^2 + 3^2 + ... + " << n << "^2 = " << sum << endl;

    return 0;
}