#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string a = "a", b = "b", c = "c";
    cout << "Исходные значения: a = " << a << ", b = " << b << ", c = " << c << endl;

    // а) b=c, a=b, c=a
    string temp = a;
    a = b;
    b = c;
    c = temp;
    cout << "После схемы (а): a = " << a << ", b = " << b << ", c = " << c << endl;

    // Возвращаем исходные значения
    a = "a"; b = "b"; c = "c";

    // б) b=a, c=b, a=c
    temp = a;
    a = c;
    c = b;
    b = temp;
    cout << "После схемы (б): a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}