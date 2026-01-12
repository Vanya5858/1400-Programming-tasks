#include <iostream>
using namespace std;

void drawLine(int n, char symbol) {
    for (int i = 0; i < n; i++) {
        cout << symbol;
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    char symbol;

    cout << "Введите количество символов: ";
    cin >> n;
    cout << "Введите символ: ";
    cin >> symbol;

    drawLine(n, symbol);
    return 0;
}