#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x1, y1, x2, y2; // первый прямоугольник (левый нижний и правый верхний)
    double x3, y3, x4, y4; // второй прямоугольник

    cout << "Введите координаты первого прямоугольника (x1 y1 x2 y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Введите координаты второго прямоугольника (x3 y3 x4 y4): ";
    cin >> x3 >> y3 >> x4 >> y4;

    // Находим минимальный охватывающий прямоугольник
    double min_x = min(x1, x3);
    double min_y = min(y1, y3);
    double max_x = max(x2, x4);
    double max_y = max(y2, y4);

    cout << "Минимальный охватывающий прямоугольник:\n";
    cout << "Левый нижний угол: (" << min_x << ", " << min_y << ")\n";
    cout << "Правый верхний угол: (" << max_x << ", " << max_y << ")\n";

    return 0;
}