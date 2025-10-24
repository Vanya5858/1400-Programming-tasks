#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    setlocale(LC_ALL, "RU");
    cout << "Введите 4 различных числа через пробел: ";
    cin >> a >> b >> c >> d;
    cout << "\nВы ввели: " << a << " " << b << " " << c << " " << d;
}