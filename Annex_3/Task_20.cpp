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
            cout << "  a) не(не X или Y) или не X = " << (!(!X || Y) || !X) << endl;
            cout << "  б) не(не X и не Y) и X = " << (!(!X && !Y) && X) << endl;
            cout << "  в) не(X или не Y) или не Y = " << (!(X || !Y) || !Y) << endl << endl;
        }
    }

    return 0;
}