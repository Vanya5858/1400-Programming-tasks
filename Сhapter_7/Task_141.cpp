#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество квадратов: ";
    cin >> n;

    double maxDiag = 0, area, side, diag;

    for (int i = 0; i < n; i++) {
        cin >> area;
        side = sqrt(area);
        diag = side * sqrt(2);
        if (diag > maxDiag) {
            maxDiag = diag;
        }
    }

    cout << "Длина диагонали самого большого квадрата: " << maxDiag << endl;
    return 0;
}