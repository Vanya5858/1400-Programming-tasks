#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int a, b;
    cout << "Введите два числа a и b: ";
    cin >> a >> b;

    bool a_divides_b = (b % a == 0);
    bool b_divides_a = (a % b == 0);

    cout << "a является делителем b: " << (a_divides_b ? "да" : "нет") << endl;
    cout << "b является делителем a: " << (b_divides_a ? "да" : "нет") << endl;

    return 0;
}