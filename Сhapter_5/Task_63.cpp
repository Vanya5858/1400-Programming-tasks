#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    // Вычисляем выражение по шагам, начиная с внутренних скобок
    // (((|20^2 - 19^2|/2)^2 - 18^2)^2 - ... - 1^2)^2

    double result = 20.0 * 20.0; // начинаем с 20^2

    cout << "Вычисление выражения:\n";
    cout << "Начальное значение: 20^2 = " << result << endl;

    for (int i = 19; i >= 1; i--) {
        double current_square = i * i;
        double difference = result - current_square;
        double abs_difference = abs(difference);

        cout << "Шаг " << (20 - i) << ": |" << result << " - " << current_square << "| = " << abs_difference;

        // Если это первый шаг (20^2 - 19^2), делим на 2
        if (i == 19) {
            abs_difference /= 2.0;
            cout << " / 2 = " << abs_difference;
        }

        result = abs_difference * abs_difference; // возводим в квадрат
        cout << " ^2 = " << result << endl;

        // Проверяем на переполнение
        if (result > 1e300) {
            cout << "Внимание: возможно переполнение!\n";
            break;
        }
    }

    cout << "\nФинальный результат: " << result << endl;

    return 0;
}