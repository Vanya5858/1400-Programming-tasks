#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int power[30];
    bool found = false;

    cout << "Мощности 30 автомобилей: ";
    for (int i = 0; i < 30; i++) {
        power[i] = 100 + rand() % 151;
        cout << power[i] << " ";
        if (power[i] > 200) found = true;
    }

    cout << (found ? "\nЕсть авто >200 л.с." : "\nНет авто >200 л.с.");

    return 0;
}