#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    // 10.2 (a)
    cout << "10.2 (а) 10 случайных целых чисел [0,10]:" << endl;
    for (int i = 0; i < 10; i++) {
        int num = rand() % 11;
        cout << num << " ";
    }
    cout << endl << endl;

    // 10.2 (б)
    cout << "10.2 (б) Введите k и a: ";
    int k, a;
    cin >> k >> a;
    cout << k << " случайных целых чисел [0," << a << "]:" << endl;
    for (int i = 0; i < k; i++) {
        int num = rand() % (a + 1);
        cout << num << " ";
    }
    cout << endl << endl;

    // 10.2 (в)
    cout << "10.2 (в) 20 случайных целых чисел [10,20]:" << endl;
    for (int i = 0; i < 20; i++) {
        int num = 10 + rand() % 11;
        cout << num << " ";
    }
    cout << endl << endl;

    // 10.2 (г)
    cout << "10.2 (г) Введите k и a: ";
    int k2, a2;
    cin >> k2 >> a2;
    cout << k2 << " случайных целых чисел [-10," << a2 << "]:" << endl;
    for (int i = 0; i < k2; i++) {
        int num = -10 + rand() % (a2 + 11);
        cout << num << " ";
    }
    cout << endl << endl;

    // 10.2 (д)
    cout << "10.2 (д) Введите a и b: ";
    int a3, b;
    cin >> a3 >> b;
    int k3 = rand() % 15 + 1;
    cout << "k = " << k3 << endl;
    cout << k3 << " случайных целых чисел [" << a3 << "," << b << "]:" << endl;
    for (int i = 0; i < k3; i++) {
        int num = a3 + rand() % (b - a3 + 1);
        cout << num << " ";
    }
    cout << endl;

    return 0;
}