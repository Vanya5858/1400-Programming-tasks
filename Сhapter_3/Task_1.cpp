#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RU");
    int centimeters, meters;

    cout << "\t\t\tПеревод сантиметров в метры\n";
    cout << "Введите длину в сантиметрах: ";
    cin >> centimeters;
    
    // Проверка на отрицательное значение
    if (centimeters < 0) {
        cout << "Ошибка: расстояние не может быть отрицательным!\n";
        return 1;
    }

    //Перевод сантиметров в метры
    meters = centimeters / 100;

    cout << "Расстояние: " << centimeters << " см\n";
    cout << "Полных метров: " << meters << " м\n";
    return 0;
}