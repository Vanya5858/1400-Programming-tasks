#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Все возможные значения X и Y:" << endl;

    bool X, Y;
    bool values[2] = { false, true };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            X = values[i];
            Y = values[j];

            cout << "X=" << X << ", Y=" << Y << ":" << endl;
            cout << "  a) не X и не Y = " << (!X && !Y) << endl;
            cout << "  б) X или (не X и Y) = " << (X || (!X && Y)) << endl;
            cout << "  в) (не X и Y) или Y = " << ((!X && Y) || Y) << endl << endl;
        }
    }

    return 0;
}