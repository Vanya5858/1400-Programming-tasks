#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    double mass, sum = 0;

    cout << "Введите количество предметов: ";
    cin >> n;
    cout << "Введите массу каждого предмета: ";

    for (int i = 0; i < n; i++) {
        cin >> mass;
        sum += mass;
    }

    cout << "Средняя масса = " << sum / n;
    return 0;
}