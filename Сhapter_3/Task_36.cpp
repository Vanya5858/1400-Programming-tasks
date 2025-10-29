#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RU");
    
    int a, b, c, x, result = 546; //По заданию

    a = (result / 10) % 10;
    b = result / 100;
    c = result % 10;
    x = a * 100 + b * 10 + c;

    cout << "Найдено число x: " << x << endl;

    // Проверка
    cout << "\nПроверка:\n";
    cout << "1. Зачеркиваем вторую цифру: из " << x << " остается " << (10 * a + c) << endl;
    cout << "2. Приписываем слева вторую цифру " << b << ": получаем " << result << endl << endl;
    return 0;
}