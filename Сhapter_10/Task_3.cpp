#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << "Введите a и b: ";
    int a, b;
    cin >> a >> b;

    int m = rand() % 20 + 1;
    int n = rand() % 20 + 1;

    cout << "m = " << m << ", n = " << n << endl;

    cout << n << " случайных целых чисел в [" << a << "," << b << "]:" << endl;
    for (int i = 0; i < n; i++) {
        int num = a + rand() % (b - a + 1);
        cout << num << " ";
    }
    cout << endl;

    cout << m << " случайных вещественных чисел в [0," << n << "]:" << endl;
    for (int i = 0; i < m; i++) {
        double num = (double)rand() / RAND_MAX * n;
        cout << num << " ";
    }
    cout << endl;

    return 0;
}