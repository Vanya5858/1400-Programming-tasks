#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int scores[n];
    int required;

    cout << "Введите пороговое значение баллов: ";
    cin >> required;

    cout << "Введите баллы по каждому из " << n << " видов спорта:\n";
    for (int i = 0; i < n; i++) cin >> scores[i];

    int total = 0;
    for (int i = 0; i < n; i++) total += scores[i];

    if (total > required)
        cout << "Спортсмен вышел в следующий этап.\n";
    else
        cout << "Спортсмен не вышел в следующий этап.\n";

    return 0;
}