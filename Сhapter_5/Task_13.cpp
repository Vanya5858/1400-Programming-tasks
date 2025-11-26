#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int multiplier = 7;

    cout << "Таблица умножения на " << multiplier << ":\n";
    cout << "-------------------\n";

    for (int i = 1; i <= 9; i++) {
        cout << i << " x " << multiplier << " = " << i * multiplier << endl;
    }

    return 0;
}