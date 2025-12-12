#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double power;
    bool hasPowerOver200 = false;

    cout << "Введите мощность двигателя 30 моделей автомобилей: ";

    for (int i = 0; i < 30 && !hasPowerOver200; i++) {
        cin >> power;
        if (power > 200)
            hasPowerOver200 = true;
    }

    // Досчитываем остальные
    for (int i = (hasPowerOver200 ? 30 : 0); i < 30; i++) {
        cin >> power;
    }

    cout << (hasPowerOver200 ? "Есть модель мощнее 200 л.с." :
        "Нет моделей мощнее 200 л.с.");
    return 0;
}