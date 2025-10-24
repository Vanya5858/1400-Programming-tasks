#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    double a, b, result_1, result_2;
    cout << "\tНахождение среднего арифметического и среднего геометрического 2 целыми числами\n";
    cout << "Введите 2 целых числа через пробел: ";
    cin >> a >> b;
    result_1 = (a + b) / 2;
    cout << "\na) Среднее арефметическое: " << result_1;
    if (((a > 0) and (b < 0)) or ((a < 0) and (b > 0))) {
        cout << "\nб) Среднее геометрическое: Невозможно найти. Под корнем не должно быть отрицания.\n";
    }
    else {
        result_2 = sqrt(a * b);
        cout << "\nб) Среднее геометрическое: " << result_2 << "\n";
    }
    return 0;
}