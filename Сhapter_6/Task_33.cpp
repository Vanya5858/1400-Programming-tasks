#include <iostream>
using namespace std;

int main() {
    double area = 100;
    double yield = 20;
    double total = area * yield;
    int year = 1;
    bool found1 = false, found2 = false, found3 = false;

    while (!found1 || !found2 || !found3) {
        year++;
        area *= 1.05;
        yield *= 1.02;
        total += area * yield;

        if (!found1 && yield > 22) {
            cout << "a) Год: " << year << endl;
            found1 = true;
        }

        if (!found2 && area > 120) {
            cout << "б) Год: " << year << endl;
            found2 = true;
        }

        if (!found3 && total > 800) {
            cout << "в) Год: " << year << endl;
            found3 = true;
        }
    }

    return 0;
}