#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Все возможные значения A, B и C:" << endl;

    bool A, B, C;
    bool values[2] = { false, true };

    int count = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                A = values[i];
                B = values[j];
                C = values[k];

                cout << ++count << ") A=" << A << ", B=" << B << ", C=" << C << ":" << endl;
                cout << "   a) не(A или не B и C) = " << !(A || (!B && C)) << endl;
                cout << "   б) A и не(B или не C) = " << (A && !(B || !C)) << endl;
                cout << "   в) не(не A или B и C) = " << !(!A || (B && C)) << endl << endl;
            }
        }
    }

    return 0;
}