#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int s;
    cout << "Введите площадь s: ";
    cin >> s;

    cout << "\nа) Все прямоугольники (считаем перестановки разными):" << endl;
    cout << "Ширина * Высота = Площадь" << endl;
    cout << "-------------------------" << endl;

    int countAll = 0;
    for (int a = 1; a <= s; a++) {
        if (s % a == 0) {
            int b = s / a;
            cout << a << " * " << b << " = " << s << endl;
            countAll++;
        }
    }
    cout << "Всего: " << countAll << " прямоугольников" << endl;

    cout << "\nб) Прямоугольники (перестановки считаем совпадающими):" << endl;
    cout << "Ширина * Высота = Площадь" << endl;
    cout << "-------------------------" << endl;

    int countUnique = 0;
    for (int a = 1; a * a <= s; a++) {
        if (s % a == 0) {
            int b = s / a;
            cout << a << " * " << b << " = " << s << endl;
            countUnique++;
        }
    }
    cout << "Всего: " << countUnique << " различных прямоугольников" << endl;

    return 0;
}