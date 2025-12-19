#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество городов: ";
    cin >> n;

    double maxDist = 0, dist;

    cout << "Введите расстояния от Москвы до каждого города: ";
    for (int i = 0; i < n; i++) {
        cin >> dist;
        if (dist > maxDist) {
            maxDist = dist;
        }
    }

    cout << "Расстояние до самого удаленного города: " << maxDist << " км\n";
    return 0;
}