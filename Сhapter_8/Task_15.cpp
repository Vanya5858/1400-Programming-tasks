#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double m;
    cout << "Введите m (0.52 <= m <= 33.7): ";
    cin >> m;

    for (int x = 1; x <= 100; x++) {
        double y = (x * x + 100.0) / (x + 200.0);
        if (y < m) {
            cout << y << " ";
        }
    }

    return 0;
}