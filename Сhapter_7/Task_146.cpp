#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество человек: ";
    cin >> n;

    double maxHeight = 0, minHeight = 1e9;

    cout << "Введите рост каждого человека: ";
    for (int i = 0; i < n; i++) {
        double height;
        cin >> height;

        if (height > maxHeight) maxHeight = height;
        if (height < minHeight) minHeight = height;
    }

    double difference = maxHeight - minHeight;
    cout << "Разница между ростом самого высокого и самого низкого: "
        << difference << " см\n";

    return 0;
}