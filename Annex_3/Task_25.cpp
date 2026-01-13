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
                cout << "   a) не(A и B) и (не A или не C) = " << (!(A && B) && (!A || !C)) << endl;
                cout << "   б) не(A и не B) или (A или не C) = " << (!(A && !B) || (A || !C)) << endl;
                cout << "   в) A и B или A или C = " << (((A && B) || A) || C) << endl << endl;
            }
        }
    }

    return 0;
}