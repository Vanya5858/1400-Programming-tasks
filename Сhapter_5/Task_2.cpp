#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number, count;

    cout << "Введите число: ";
    cin >> number;
    cout << "Введите количество повторений: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << number;
    }
    cout << endl;
    return 0;
}