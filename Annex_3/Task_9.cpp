#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    bool X = true;
    bool Y = false;
    bool Z = false;

    cout << "a) не X или не Y или не Z = " << (!X || !Y || !Z) << endl;
    cout << "б) (не X или не Y) и (X или Y) = " << ((!X || !Y) && (X || Y)) << endl;
    cout << "в) X и Y или X и Z или не Z = " << ((X && Y) || (X && Z) || !Z) << endl;

    return 0;
}