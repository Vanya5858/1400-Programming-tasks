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

    double totalR = 0;
    for (int i = 0; i < n; i++) totalR += 1.0 / R[i];

    cout << "Общее сопротивление цепи при параллельном соединении: " << 1.0 / totalR << " Ом\n";
    return 0;
}