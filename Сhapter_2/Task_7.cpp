#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double x;
    cout << "\t\t\tПрограмма для вычисления объёма куба и его площади боковой поверхности\n\n";
    cout << "Введите длину ребра куда: ";
    cin >> x;
    cout << "Ответ: V = " << x * x * x << "; S(бок.поверх) = " << 4 * x * x << "\n";
    return 0;
}
