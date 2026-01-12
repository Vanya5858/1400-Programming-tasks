#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateExpression(double num) {
    return (sqrt(num) + num) / 2;
}

int main() {
    setlocale(LC_ALL, "RU");

    double x = calculateExpression(6) + calculateExpression(13) + calculateExpression(21);

    cout << fixed << setprecision(4);
    cout << "x = " << x << endl;

    return 0;
}