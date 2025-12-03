#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, a;
    cout << "Введите количество квартир n и номер первой квартиры a: ";
    cin >> n >> a;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a + i;
    }

    if (sum % 2 == 0) {
        cout << "Сумма номеров четная\n";
    }
    else {
        cout << "Сумма номеров нечетная\n";
    }

    return 0;
}