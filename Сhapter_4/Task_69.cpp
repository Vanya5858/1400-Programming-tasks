#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b, c, d, e;
    cout << "Введите размеры стола (a b): ";
    cin >> a >> b;
    cout << "Введите размеры кости домино (c d e): ";
    cin >> c >> d >> e;

    // Рассчитываем количество костей для разных ориентаций
    int count1 = (a / c) * (b / d);
    int count2 = (a / d) * (b / c);

    cout << "При ориентации c*d: " << count1 << " костей\n";
    cout << "При ориентации d*c: " << count2 << " костей\n";
    cout << "Максимальное количество: " << max(count1, count2) << endl;

    return 0;
}