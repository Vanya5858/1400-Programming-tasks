#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    bool X = false;
    bool Y = false;
    bool Z = true;

    cout << "a) X или Y и Z = " << (X || (Y && Z)) << endl;
    cout << "б) X и Y или Z = " << ((X && Y) || Z) << endl;
    cout << "в) X и Y или Z (повтор) = " << ((X && Y) || Z) << endl;

    return 0;
}