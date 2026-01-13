#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    bool X = false;
    bool Y = true;
    bool Z = false;

    cout << "a) X и Y или Z = " << ((X && Y) || Z) << endl;
    cout << "б) X или Y и Z = " << (X || (Y && Z)) << endl;
    cout << "в) X и (Y или Z) = " << (X && (Y || Z)) << endl;

    return 0;
}