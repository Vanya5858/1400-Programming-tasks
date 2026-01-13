#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    bool A = true;
    bool B = false;
    bool C = false;

    cout << "a) A и B = " << (A && B) << endl;
    cout << "б) A или B = " << (A || B) << endl;
    cout << "в) A и B или C = " << ((A && B) || C) << endl;

    return 0;
}