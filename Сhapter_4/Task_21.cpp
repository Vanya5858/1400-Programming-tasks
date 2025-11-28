#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x1, y1, w1, h1; // первый прямоугольник
    double x2, y2, w2, h2; // второй прямоугольник

    cout << "Введите первый прямоугольник (x1 y1 ширина1 высота1): ";
    cin >> x1 >> y1 >> w1 >> h1;
    cout << "Введите второй прямоугольник (x2 y2 ширина2 высота2): ";
    cin >> x2 >> y2 >> w2 >> h2;

    double min_x = min(x1, x2);
    double min_y = min(y1, y2);
    double max_x = max(x1 + w1, x2 + w2);
    double max_y = max(y1 + h1, y2 + h2);

    cout << "Минимальный охватывающий прямоугольник:\n";
    cout << "Левый нижний: (" << min_x << ", " << min_y << ")\n";
    cout << "Правый верхний: (" << max_x << ", " << max_y << ")\n";

    return 0;
}