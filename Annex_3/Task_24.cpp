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
                cout << "   a) не(Y или не X и Z) или Z = " << (!(Y || (!X && Z)) || Z) << endl;
                cout << "   б) X и Y или Z или Y = " << (((X && Y) || Z) || Y) << endl;
                cout << "   в) не(X или Y и Z) или не X = " << (!(X || (Y && Z)) || !X) << endl << endl;
            }
        }
    }

    return 0;
}