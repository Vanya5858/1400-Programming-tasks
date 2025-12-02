#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x1, y1, w1, h1, x2, y2, w2, h2;

    cout << "Введите первый прямоугольник (x1 y1 w1 h1): ";
    cin >> x1 >> y1 >> w1 >> h1;
    cout << "Введите второй прямоугольник (x2 y2 w2 h2): ";
    cin >> x2 >> y2 >> w2 >> h2;

    // а) принадлежат ли все точки первого прямоугольника второму
    bool all_points_inside = (x1 >= x2) && (y1 >= y2) &&
        (x1 + w1 <= x2 + w2) && (y1 + h1 <= y2 + h2);

    // б) принадлежат ли все точки одного из прямоугольников другому
    bool one_inside_other = all_points_inside ||
        (x2 >= x1) && (y2 >= y1) &&
        (x2 + w2 <= x1 + w1) && (y2 + h2 <= y1 + h1);

    // в) пересекаются ли прямоугольники
    bool intersect = !(x1 + w1 < x2 || x2 + w2 < x1 ||
        y1 + h1 < y2 || y2 + h2 < y1);

    cout << "а) Все точки первого во втором: " << (all_points_inside ? "да" : "нет") << endl;
    cout << "б) Один внутри другого: " << (one_inside_other ? "да" : "нет") << endl;
    cout << "в) Прямоугольники пересекаются: " << (intersect ? "да" : "нет") << endl;

    return 0;
}