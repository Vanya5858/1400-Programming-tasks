#include <iostream>
using namespace std;

void drawLine60() {
    for (int i = 0; i < 60; i++) {
        cout << '*';
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Прямоугольник 60x20 (способ 1):" << endl;
    // Способ 1: без использования drawLine60
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 60; j++) {
            cout << '*';
        }
        cout << endl;
    }

    cout << "\nПрямоугольник 60x20 (способ 2):" << endl;
    // Способ 2: с использованием drawLine60
    for (int i = 0; i < 20; i++) {
        drawLine60();
    }

    return 0;
}