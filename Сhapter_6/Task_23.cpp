#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int sum = 0;
    for (int i = 0; i < m && n > 0; i++) {
        sum += n % 10;
        n /= 10;
    }

    cout << sum << endl;
    return 0;
}