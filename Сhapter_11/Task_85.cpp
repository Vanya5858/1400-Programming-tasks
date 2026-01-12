#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 30;
    int heights[n];

    cout << "Введите рост " << n << " учеников:\n";
    for (int i = 0; i < n; i++) cin >> heights[i];

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (heights[i] > 170) count++;
    }

    cout << "Учеников ростом > 170 см: " << count << endl;

    if (count >= 5)
        cout << "Можно сформировать баскетбольную команду.\n";
    else
        cout << "Нельзя сформировать баскетбольную команду.\n";

    return 0;
}