#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RU");
    int kilograms;

    cout << "\t\tПеревод из кг в центнеры (100 кг = 1ц)\n";
    cout << "Введите массу в килограммах: ";
    cin >> kilograms;

    if (kilograms < 0) {
        cout << "Ошибка!\n\n";
        return 1;
    }

    double centners_exact = kilograms / 100.0;  // точное значение в центнерах

    cout << "Масса: " << kilograms << " кг\n";
    cout << "Точное значение: " << centners_exact << " ц\n";
    cout << "Полных центнеров: " << kilograms / 100 << " ц\n\n";

    return 0;
}