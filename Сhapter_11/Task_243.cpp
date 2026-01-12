#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int POINTS = 20;
    double x[POINTS], y[POINTS];

    cout << "Введите координаты " << POINTS << " точек:\n";
    for (int i = 0; i < POINTS; i++) {
        cout << "Точка " << i + 1 << ":\n";
        cout << "  x: ";
        cin >> x[i];
        cout << "  y: ";
        cin >> y[i];
    }

    // Находим минимальные и максимальные координаты
    double minX = x[0], maxX = x[0];
    double minY = y[0], maxY = y[0];

    for (int i = 1; i < POINTS; i++) {
        if (x[i] < minX) minX = x[i];
        if (x[i] > maxX) maxX = x[i];
        if (y[i] < minY) minY = y[i];
        if (y[i] > maxY) maxY = y[i];
    }

    // Левый нижний и правый верхний углы прямоугольника
    double leftBottomX = minX;
    double leftBottomY = minY;
    double rightTopX = maxX;
    double rightTopY = maxY;

    cout << fixed << setprecision(2);
    cout << "\nНаименьший прямоугольник, содержащий все точки:\n";
    cout << "Левый нижний угол: (" << leftBottomX << ", " << leftBottomY << ")\n";
    cout << "Правый верхний угол: (" << rightTopX << ", " << rightTopY << ")\n";
    cout << "Ширина: " << rightTopX - leftBottomX << endl;
    cout << "Высота: " << rightTopY - leftBottomY << endl;

    return 0;
}