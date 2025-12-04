#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double weight;
    cout << "Введите вес боксера (кг): ";
    cin >> weight;

    if (weight < 60) {
        cout << "Легкий вес\n";
    }
    else if (weight < 64) {
        cout << "Первый полусредний вес\n";
    }
    else if (weight < 69) {
        cout << "Полусредний вес\n";
    }
    else {
        cout << "Вес превышает категорию полусреднего\n";
    }

    return 0;
}