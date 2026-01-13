#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a, b;
    cout << "Введите размеры лужайки (ширину и высоту): ";
    cin >> a >> b;

    cout << "Размер лужайки: " << a << "×" << b << " метров" << endl;

    int totalFence = 0;
    int x = 0, y = 0; 
    int dx = 1, dy = 0; 
    int stepsX = a, stepsY = b; 

    while (stepsX > 0 || stepsY > 0) {
        // Горизонтальное движение
        if (dx != 0) {
            if (stepsX > 0) {
                totalFence += stepsY; // Добавляем вертикальные секции ограждения
                x += dx * (stepsX - 1);
                stepsX--;
            }
            dy = (dx > 0) ? 1 : -1; // Поворот вниз или вверх
            dx = 0;
        }
        // Вертикальное движение
        else if (dy != 0) {
            if (stepsY > 0) {
                totalFence += stepsX; // Добавляем горизонтальные секции ограждения
                y += dy * (stepsY - 1);
                stepsY--;
            }
            dx = (dy > 0) ? -1 : 1; // Поворот влево или вправо
            dy = 0;
        }
    }

    cout << "Длина ограждения для спиральной дорожки: " << totalFence << " метров" << endl;

    return 0;
}