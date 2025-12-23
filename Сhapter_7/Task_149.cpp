#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество людей: ";
    cin >> n;

    double maxMass = 0, minMass = 1e9;

    cout << "Введите массу каждого человека: ";
    for (int i = 0; i < n; i++) {
        double mass;
        cin >> mass;

        if (mass > maxMass) maxMass = mass;
        if (mass < minMass) minMass = mass;
    }

    bool condition = maxMass > 2 * minMass;
    cout << "Масса самого тяжелого (" << maxMass
        << ") превышает массу самого легкого (" << minMass
        << ") более чем в 2 раза: "
        << (condition ? "Верно" : "Неверно") << endl;

    return 0;
}