#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RU");
    
    int result = 237;
    int a, bc, x;

    a = result / 100;
    bc = result % 100;

    x = (bc * 10) + a;
    cout << "Изначальное число x: " << x << endl;
    
    // Проверка
    cout << "Проверка:\n";
    cout << "1. Вычитаем последнюю цифру: " << x << " - " << a << " = " << (x - a) << endl;
    cout << "2. Делим на 10: " << (x - a) << " / 10 = " << (x - a) / 10 << endl;
    cout << "3. Приписываем слева " << a << ": получаем " << result << endl << endl;
    return 0;
}