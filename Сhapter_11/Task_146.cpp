#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 23;
    double times[n];

    cout << "Введите результаты " << n << " спортсменов (в сотых долях секунды):\n";
    for (int i = 0; i < n; i++) cin >> times[i];

    // Сортируем массив
    sort(times, times + n);

    // Лучшие 4 результата
    cout << "Четыре лучших бегуна для эстафеты:\n";
    cout << "Результаты: ";
    for (int i = 0; i < 4; i++) {
        cout << times[i] << " ";
    }
    cout << "\nСумма: " << times[0] + times[1] + times[2] + times[3] << endl;

    return 0;
}