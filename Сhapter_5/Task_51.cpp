#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double area = 100; // площадь участка в га
    double yield = 20; // урожайность в ц/га

    cout << "Урожайность по годам:\n";
    for (int year = 2; year <= 8; year++) {
        yield *= 1.02; // увеличение на 2%
        cout << year << "-й год: " << yield << " ц/га\n";
    }

    area = 100;
    yield = 20;
    cout << "\nПлощадь участка по годам:\n";
    for (int year = 1; year <= 7; year++) {
        if (year >= 4) {
            cout << year << "-й год: " << area << " га\n";
        }
        area *= 1.05; // увеличение на 5%
    }

    area = 100;
    yield = 20;
    double total_harvest = 0;
    for (int year = 1; year <= 6; year++) {
        total_harvest += area * yield;
        area *= 1.05;
        yield *= 1.02;
    }
    cout << "\nУрожай за первые 6 лет: " << total_harvest << " ц\n";

    return 0;
}