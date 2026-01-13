#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    bool A = true;
    bool B = false;
    bool C = false;

    cout << "a) A или B и C = " << (A || (B && C)) << endl;
    cout << "б) A и B или C = " << ((A && B) || C) << endl;
    cout << "в) A и C или B = " << ((A && C) || B) << endl;

    return 0;
}