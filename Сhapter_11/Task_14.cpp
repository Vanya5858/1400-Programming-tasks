#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите натуральное число (n <= 99999): ";
    cin >> n;

    const int SIZE = 5; 
    int digits[SIZE] = { 0 }; 

    int temp = n;
    int index = 0;

    // Извлекаем цифры в обратном порядке
    while (temp > 0 && index < SIZE) {
        digits[index] = temp % 10;
        temp /= 10;
        index++;
    }

    // Выводим результат
    cout << "\nЧисло: " << n << endl;
    cout << "Цифры в обратном порядке: ";
    for (int i = 0; i < SIZE; i++) {
        cout << digits[i] << " ";
    }
    cout << endl;

    // Выводим только цифры числа (без лишних нулей)
    cout << "Только цифры числа: ";
    for (int i = 0; i < index; i++) {
        cout << digits[i] << " ";
    }
    cout << endl;

    return 0;
}