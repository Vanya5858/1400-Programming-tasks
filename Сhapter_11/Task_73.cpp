#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 22;
    int heights[n];
    int r;

    cout << "Введите максимальный рост r: ";
    cin >> r;

    cout << "Введите рост " << n << " учеников:\n";
    for (int i = 0; i < n; i++) cin >> heights[i];

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (heights[i] <= r) count++;
    }

    cout << "Количество учеников с ростом <= " << r << ": " << count << endl;
    return 0;
}