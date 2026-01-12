#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    double R[n];

    cout << "Введите сопротивление каждого из " << n << " элементов (Ом):\n";
    for (int i = 0; i < n; i++) {
        cin >> R[i];
    }

    double total = 0;
    for (int i = 0; i < n; i++) total += R[i];

    cout << "Общее сопротивление цепи при последовательном соединении: " << total << " Ом\n";
    return 0;
}