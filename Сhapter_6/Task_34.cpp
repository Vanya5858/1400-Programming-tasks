#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int limit = m * n;

    for (int i = 1; i <= limit; i++) {
        if (i % m == 0 && i % n == 0) {
            cout << i << endl;
        }
    }

    return 0;
}