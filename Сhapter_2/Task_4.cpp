#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double x;
    cout << "Введите вашу сторону квадрата для нахождения периметра: ";
    cin >> x;
    cout << "Ответ: P = " << 4 * x << "\n\n";
    return 0;
}
