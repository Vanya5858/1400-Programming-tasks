#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int a;
    cout << "Вы ввели число: ";
    cin >> a;
    cout << "Следующее за числом " << a << " число - " << a + 1 << "." << endl;
    cout << "Для числа " << a << " предыдущее число – " << a - 1 << "." << endl;
    return 0;
}