#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 25;
    int heights[n];

    cout << "Введите рост " << n << " учеников:\n";
    for (int i = 0; i < n; i++) cin >> heights[i];

    double sum = 0;
    for (int i = 0; i < n; i++) sum += heights[i];
    double avg = sum / n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (heights[i] > avg) count++;
    }

    cout << "Средний рост: " << avg << " см\n";
    cout << "Количество учеников выше среднего роста: " << count << endl;

    return 0;
}