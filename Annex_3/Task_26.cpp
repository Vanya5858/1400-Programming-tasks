#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Все возможные значения X, Y и Z:" << endl;

    bool X, Y, Z;
    bool values[2] = { false, true };

    int count = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                X = values[i];
                Y = values[j];
                Z = values[k];

                cout << ++count << ") X=" << X << ", Y=" << Y << ", Z=" << Z << ":" << endl;
                cout << "   a) не(X или Y) и (не X или не Z) = " << (!(X || Y) && (!X || !Z)) << endl;
                cout << "   б) не(не X и Y) или (X и не Z) = " << (!(!X && Y) || (X && !Z)) << endl;
                cout << "   в) X или Y и Z или X или Z = " << ((X || (Y && Z) || X) || Z) << endl << endl;
            }
        }
    }

    return 0;
}