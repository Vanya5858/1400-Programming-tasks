#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int a = 100;
    int b = 30;
    a = a - b * 3;
    int c;
    
    if (a > b) {
        c = a - b;
    }
    else {
        c = b - a;
    }

    cout << "c = " << c << endl;

    return 0;
}