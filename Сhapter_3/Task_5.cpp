#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int rectangle_width = 543;
    int rectangle_height = 130;
    int square_side = 130;

    // Вычисление количества квадратов
    int squares_per_row = rectangle_width / square_side;  // квадратов в ряду
    int number_of_rows = rectangle_height / square_side;  // количество рядов
    int total_squares = squares_per_row * number_of_rows; // общее количество

    // Вычисление остатков
    int width_remainder = rectangle_width % square_side;  // остаток по ширине
    int height_remainder = rectangle_height % square_side; // остаток по высоте

    // Вывод результатов
    cout << "Размер прямоугольника: " << rectangle_width << " * " << rectangle_height << " мм\n";
    cout << "Сторона квадрата: " << square_side << " мм\n\n";
    cout << "Квадратов в одном ряду: " << squares_per_row << endl;
    cout << "Количество рядов: " << number_of_rows << endl;
    cout << "Всего можно отрезать: " << total_squares << " квадрата\n\n";
    cout << "Остаток материала:\n";
    cout << "По ширине: " << width_remainder << " мм\n";
    cout << "По высоте: " << height_remainder << " мм\n";
    return 0;
}