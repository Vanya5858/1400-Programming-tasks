#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    bool X = false;
    bool Y = true;
    bool Z = false;

    cout << "a) X или Z = " << (X || Z) << endl;
    cout << "б) X и Y = " << (X && Y) << endl;
    cout << "в) X и Z = " << (X && Z) << endl;

    return 0;
}