#include <iostream>
using namespace std;

void drawRectangleFrame(int width, int height) {
    // Верхняя рамка
    for (int i = 0; i < width; i++) {
        cout << '*';
    }
    cout << endl;

    // Боковые рамки
    for (int i = 0; i < height - 2; i++) {
        cout << '*';
        for (int j = 0; j < width - 2; j++) {
            cout << ' ';
        }
        cout << '*' << endl;
    }

    // Нижняя рамка
    for (int i = 0; i < width; i++) {
        cout << '*';
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Рамка 60x20:" << endl;
    drawRectangleFrame(60, 20);

    return 0;
}