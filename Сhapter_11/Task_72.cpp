#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int days = 31;
    double sales[days];
    double s;

    cout << "Введите пороговое значение s: ";
    cin >> s;

    cout << "Введите стоимость проданных товаров за каждый день марта:\n";
    for (int i = 0; i < days; i++) cin >> sales[i];

    int count = 0;
    for (int i = 0; i < days; i++) {
        if (sales[i] > s) count++;
    }

    cout << "Количество дней с продажами > " << s << ": " << count << endl;
    return 0;
}