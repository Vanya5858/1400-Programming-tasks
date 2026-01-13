#include <iostream>
using namespace std;

int main() {
    // а) без условия
    for (int i = 13; i < 100; i += 13) {
        cout << i << endl;
    }

    // б) с условием
    int i = 13;
    while (i < 100) {
        cout << i << endl;
        i += 13;
    }

    return 0;
}