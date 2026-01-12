#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double hypotenuse(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    setlocale(LC_ALL, "RU");

    double AB, AD, CD;

    cout << "Введите стороны фигуры ABCD:" << endl;
    cout << "AB = ";
    cin >> AB;
    cout << "AD = ";
    cin >> AD;
    cout << "CD = ";
    cin >> CD;

    // Предполагаем, что BC - гипотенуза прямоугольного треугольника с катетами (AD - CD) и AB
    double BC = hypotenuse(AB, (AD - CD));

    double perimeter = AB + AD + CD + BC;

    cout << fixed << setprecision(2);
    cout << "\nРезультат:" << endl;
    cout << "BC = " << BC << endl;
    cout << "Периметр фигуры ABCD = " << perimeter << endl;

    return 0;
}