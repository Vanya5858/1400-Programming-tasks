#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;
    cout << "Введите три различных числа: ";
    cin >> a >> b >> c;

    double sum_two_largest;

    // Один условный оператор
    if (a > b) {
        if (a > c) {
            if (b > c) {
                sum_two_largest = a + b;
            }
            else {
                sum_two_largest = a + c;
            }
        }
        else {
            sum_two_largest = a + c;
        }
    }
    else {
        if (b > c) {
            if (a > c) {
                sum_two_largest = b + a; 
            }
            else {
                sum_two_largest = b + c; 
            }
        }
        else {
            sum_two_largest = b + c;
        }
    }

    cout << "Сумма двух наибольших: " << sum_two_largest << endl;

    return 0;
}