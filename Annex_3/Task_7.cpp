#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    bool A = true;
    bool B = false;
    bool C = false;

    cout << "a) A или B или C = " << (A || B || C) << endl;
    cout << "б) A и B и C = " << (A && B && C) << endl;
    cout << "в) A или B и C = " << (A || (B && C)) << endl;

    return 0;
}