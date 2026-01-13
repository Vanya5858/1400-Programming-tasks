#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int length = 425, width = 131;
    cout << "Размеры прямоугольника: " << length << "×" << width << endl;

    int squareCount = 0;

    cout << "Разрезание на квадраты:" << endl;
    while (length > 0 && width > 0) {
        if (length >= width) {
            int count = length / width;
            cout << "Квадратов со стороной " << width << ": " << count << endl;
            length %= width;
            squareCount += count;
        }
        else {
            int count = width / length;
            cout << "Квадратов со стороной " << length << ": " << count << endl;
            width %= length;
            squareCount += count;
        }
    }

    cout << "Всего квадратов: " << squareCount << endl;

    return 0;
}