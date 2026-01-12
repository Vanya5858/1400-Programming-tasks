#include <iostream>
using namespace std;

void drawLine(int n, char symbol) {
    for (int i = 0; i < n; i++) {
        cout << symbol << " ";
    }
    cout << endl;
}

void drawTriangle() {
    for (int i = 1; i <= 10; i++) {
        drawLine(i, '*');
    }
}

void drawDiamond() {
    // Верхняя часть
    for (int i = 1; i <= 6; i++) {
        drawLine(i, '*');
    }
    // Нижняя часть
    for (int i = 5; i >= 1; i--) {
        drawLine(i, '*');
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Треугольник:" << endl;
    drawTriangle();

    cout << "\nРомб:" << endl;
    drawDiamond();

    return 0;
}