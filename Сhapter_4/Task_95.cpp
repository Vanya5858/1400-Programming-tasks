#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите n (1-32): ";
    cin >> n;

    if (n == 1) {
        cout << "0\n";
    }
    else {
        n--;
        int number = 1;

        while (n > 0) {
            if (number < 10) {
                // Однозначные числа занимают 1 позицию
                if (n == 1) {
                    cout << number << endl;
                    break;
                }
                n--;
            }
            else {
                // Двузначные числа занимают 2 позиции
                if (n == 1) {
                    cout << number / 10 << endl;
                    break;
                }
                else if (n == 2) {
                    cout << number % 10 << endl;
                    break;
                }
                n -= 2;
            }
            number++;
        }
    }

    return 0;
}