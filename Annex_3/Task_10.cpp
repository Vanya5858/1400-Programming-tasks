#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    bool A = false;
    bool B = false;
    bool C = true;

    cout << "a) (не A или не B) и не C = " << ((!A || !B) && !C) << endl;
    cout << "б) (не A или не B) и (A или B) = " << ((!A || !B) && (A || B)) << endl;
    cout << "в) A и B или A и C или не C = " << ((A && B) || (A && C) || !C) << endl;

    return 0;
}