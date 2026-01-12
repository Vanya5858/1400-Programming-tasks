#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    double weights[n];

    cout << "Введите вес " << n << " человек:\n";
    for (int i = 0; i < n; i++) cin >> weights[i];

    double maxWeight = weights[0], minWeight = weights[0];

    for (int i = 1; i < n; i++) {
        if (weights[i] > maxWeight) maxWeight = weights[i];
        if (weights[i] < minWeight) minWeight = weights[i];
    }

    if (maxWeight > 2 * minWeight)
        cout << "Вес самого тяжелого превышает вес самого легкого более чем в 2 раза.\n";
    else
        cout << "Вес самого тяжелого не превышает вес самого легкого в 2 раза.\n";

    return 0;
}