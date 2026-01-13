#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Все возможные значения A и B:" << endl;

    bool A, B;
    bool values[2] = { false, true };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            A = values[i];
            B = values[j];

            cout << "A=" << A << ", B=" << B << ":" << endl;
            cout << "  a) не A и не B или A = " << ((!A && !B) || A) << endl;
            cout << "  б) B или не A и не B = " << (B || (!A && !B)) << endl;
            cout << "  в) B и не(A и не B) = " << (B && !(A && !B)) << endl << endl;
        }
    }

    return 0;
}