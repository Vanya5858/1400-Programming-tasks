#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 18;
    double scores[n];

    cout << "Введите " << n << " оценок (первые 6 - обязательная программа, остальные - произвольная):\n";
    for (int i = 0; i < n; i++) cin >> scores[i];

    double sum1 = 0, sum2 = 0;
    for (int i = 0; i < 6; i++) sum1 += scores[i];
    for (int i = 6; i < n; i++) sum2 += scores[i];

    if (sum1 > sum2)
        cout << "Лучший результат в обязательной программе.\n";
    else if (sum1 < sum2)
        cout << "Лучший результат в произвольной программе.\n";
    else
        cout << "Результаты равны.\n";

    return 0;
}