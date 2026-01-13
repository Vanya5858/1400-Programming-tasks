#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int position = 1;
    int result = 0;

    while (n > 0) {
        if (n % 10 == 8) {
            result = position;
        }
        position++;
        n /= 10;
    }

    cout << result << endl;
    return 0;
}