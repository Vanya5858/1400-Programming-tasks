#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k;
    cout << "Введите количество грибов: ";
    cin >> k;

    cout << "мы нашли " << k << " гриб";

    if (k % 10 == 1 && k != 11) {
        // ничего не добавляем
    }
    else if (k % 10 >= 2 && k % 10 <= 4 && (k < 10 || k > 20)) {
        cout << "а";
    }
    else {
        cout << "ов";
    }
    cout << " в лесу\n";

    return 0;
}