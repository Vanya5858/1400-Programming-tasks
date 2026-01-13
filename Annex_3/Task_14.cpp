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
            cout << "  a) не(X или Y) = " << !(X || Y) << endl;
            cout << "  б) не X и Y = " << (!X && Y) << endl;
            cout << "  в) X и не Y = " << (X && !Y) << endl << endl;
        }
    }

    return 0;
}