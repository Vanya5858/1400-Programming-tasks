#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    // Ввод трехзначного числа
    cout << "Введите трехзначное число с различными цифрами: ";
    cin >> number;

    // Проверка, что число действительно трехзначное
    if (number < 100 || number > 999) {
        cout << "Ошибка! Введите трехзначное число (100-999)\n";
        return 1;
    }

    // Разделяем число на цифры
    int a = number / 100;           // первая цифра (сотни)
    int b = (number / 10) % 10;     // вторая цифра (десятки)
    int c = number % 10;            // третья цифра (единицы)

    // Формируем все шесть перестановок
    int num1 = a * 100 + b * 10 + c;  
    int num2 = a * 100 + c * 10 + b;  
    int num3 = b * 100 + a * 10 + c;  
    int num4 = b * 100 + c * 10 + a;  
    int num5 = c * 100 + a * 10 + b;  
    int num6 = c * 100 + b * 10 + a;  

    // Вывод результатов
    cout << "Исходное число: " << number << endl;
    cout << "Цифры: " << a << ", " << b << ", " << c << endl << endl;
    cout << "Все перестановки:\n";
    cout << "1. " << a << b << c << " = " << num1 << endl;
    cout << "2. " << a << c << b << " = " << num2 << endl;
    cout << "3. " << b << a << c << " = " << num3 << endl;
    cout << "4. " << b << c << a << " = " << num4 << endl;
    cout << "5. " << c << a << b << " = " << num5 << endl;
    cout << "6. " << c << b << a << " = " << num6 << endl;

    return 0;
}