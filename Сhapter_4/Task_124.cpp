#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double mitya, vasya;
    cout << "Введите возраст Мити: ";
    cin >> mitya;
    cout << "Введите возраст Васи: ";
    cin >> vasya;

    if (mitya > vasya) {
        cout << "Митя старше\n";
    }
    else if (vasya > mitya) {
        cout << "Вася старше\n";
    }
    else {
        cout << "Одного возраста\n";
    }

    return 0;
}