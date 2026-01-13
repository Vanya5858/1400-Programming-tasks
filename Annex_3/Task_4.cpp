#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    bool X = true;
    bool Y = true;
    bool Z = false;

    cout << "a) X и Y = " << (X && Y) << endl;
    cout << "б) X или Y = " << (X || Y) << endl;
    cout << "в) X или Y и Z = " << (X || (Y && Z)) << endl;

    return 0;
}