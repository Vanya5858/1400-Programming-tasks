#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));
    double M_PI = 3.141592653589793;
    cout << fixed << setprecision(4);

    int variant;
    cout << "Выберите фигуру (1-половина синусоиды, 2-парабола): ";
    cin >> variant;

    long long N;
    cout << "Введите количество точек для метода Монте-Карло: ";
    cin >> N;

    if (variant == 1) {
        // Половина синусоиды y = sin(x) от 0 до π
        cout << "\nа) Половина синусоиды y = sin(x), x принадлежит [0, П]" << endl;

        long long pointsInside = 0;
        double x, y;

        for (long long i = 0; i < N; i++) {
            x = (double)rand() / RAND_MAX * M_PI; // 0 до π
            y = (double)rand() / RAND_MAX; // 0 до 1

            if (y <= sin(x)) {
                pointsInside++;
            }
        }

        double area = ((double)pointsInside / N) * M_PI; // Площадь прямоугольника π×1
        double exactArea = 2.0; // ∫sin(x)dx от 0 до π = 2

        cout << "Точек внутри: " << pointsInside << " из " << N << endl;
        cout << "Приближённая площадь: " << area << endl;
        cout << "Точная площадь: " << exactArea << endl;
        cout << "Относительная ошибка: " << abs(area - exactArea) / exactArea * 100 << "%" << endl;

    }
    else {
        // Парабола y = x² от 0 до 3
        cout << "\nб) Квадратная парабола y = x^2, x принадлежит [0, 3]" << endl;

        long long pointsInside = 0;
        double x, y;

        for (long long i = 0; i < N; i++) {
            x = (double)rand() / RAND_MAX * 3; // 0 до 3
            y = (double)rand() / RAND_MAX * 9; // 0 до 9 (макс y = 3² = 9)

            if (y <= x * x) {
                pointsInside++;
            }
        }

        double area = ((double)pointsInside / N) * (3 * 9); // Площадь прямоугольника 3×9
        double exactArea = 9.0; // ∫x²dx от 0 до 3 = 9

        cout << "Точек внутри: " << pointsInside << " из " << N << endl;
        cout << "Приближённая площадь: " << area << endl;
        cout << "Точная площадь: " << exactArea << endl;
        cout << "Относительная ошибка: " << abs(area - exactArea) / exactArea * 100 << "%" << endl;
    }

    return 0;
}