#include <iostream>
using namespace std;

void drawLine(int n, char symbol) {
    for (int i = 0; i < n; i++) {
        cout << symbol;
    }
    cout << endl;
}

void drawRectangle1(int width, int height) {
    // Способ 1: без использования drawLine
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

void drawRectangle2(int width, int height) {
    // Способ 2: с использованием drawLine
    for (int i = 0; i < height; i++) {
        drawLine(width, '*');
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    int width, height;
    cout << "Введите ширину прямоугольника: ";
    cin >> width;
    cout << "Введите высоту прямоугольника: ";
    cin >> height;

    cout << "\nСпособ 1 (без функции drawLine):" << endl;
    drawRectangle1(width, height);

    cout << "\nСпособ 2 (с функцией drawLine):" << endl;
    drawRectangle2(width, height);

    return 0;
}