#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double r, total = 0;
    int n;

    cout << "Введите количество элементов: ";
    cin >> n;
    cout << "Введите сопротивление каждого: ";

    for (int i = 0; i < n; i++) {
        cin >> r;
        total += r;
    }

    cout << "Общее сопротивление (последовательно) = " << total;
    return 0;
}