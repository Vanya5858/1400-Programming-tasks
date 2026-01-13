#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int divisor = 2;
    while (n % divisor != 0) {
        divisor++;
    }

    cout << divisor << endl;
    return 0;
}