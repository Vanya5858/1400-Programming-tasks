#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    // 10.1 (a)
    cout << "10.1 (a) 8 случайных вещественных чисел [0,1):" << endl;
    for (int i = 0; i < 8; i++) {
        double num = (double)rand() / RAND_MAX;
        cout << num << " ";
    }
    cout << endl << endl;

    // 10.1 (б)
    cout << "10.1 (б) Введите k: ";
    int k;
    cin >> k;
    cout << k << " случайных вещественных чисел [0,1):" << endl;
    for (int i = 0; i < k; i++) {
        double num = (double)rand() / RAND_MAX;
        cout << num << " ";
    }
    cout << endl << endl;

    // 10.1 (в)
    cout << "10.1 (в) 15 случайных чисел [25,26):" << endl;
    for (int i = 0; i < 15; i++) {
        double num = 25 + (double)rand() / RAND_MAX;
        cout << num << " ";
    }
    cout << endl << endl;

    // 10.1 (г)
    cout << "10.1 (г) 20 случайных чисел [0,15):" << endl;
    for (int i = 0; i < 20; i++) {
        double num = 15 * ((double)rand() / RAND_MAX);
        cout << num << " ";
    }
    cout << endl << endl;

    // 10.1 (д)
    cout << "10.1 (д) Введите a и b: ";
    int a, b;
    cin >> a >> b;
    int k2 = rand() % a + 1;
    cout << "k = " << k2 << endl;
    cout << k2 << " случайных чисел [0," << b << "):" << endl;
    for (int i = 0; i < k2; i++) {
        double num = b * ((double)rand() / RAND_MAX);
        cout << num << " ";
    }
    cout << endl << endl;

    // 10.1 (е)
    cout << "10.1 (е) 10 случайных чисел [-40,40):" << endl;
    for (int i = 0; i < 10; i++) {
        double num = -40 + 80 * ((double)rand() / RAND_MAX);
        cout << num << " ";
    }
    cout << endl << endl;

    // 10.1 (ж)
    cout << "10.1 (ж) Введите m, a, b: ";
    int m, a1, b1;
    cin >> m >> a1 >> b1;
    int k3 = rand() % m + 1;
    cout << "k = " << k3 << endl;
    cout << k3 << " случайных чисел [" << a1 << "," << b1 << "):" << endl;
    for (int i = 0; i < k3; i++) {
        double num = a1 + (b1 - a1) * ((double)rand() / RAND_MAX);
        cout << num << " ";
    }
    cout << endl;

    return 0;
}