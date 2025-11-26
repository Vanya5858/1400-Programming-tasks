#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double sum = 0;

    for (int i = 2; i <= 10; i++) {
        sum += (double)i / (i + 1);
    }

    cout << "2/3 + 3/4 + 4/5 + ... + 10/11 = " << sum << endl;

    return 0;
}