#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "2n для n от 21 до 151 с шагом 10:\n";

    for (int n = 21; n <= 151; n += 10) {
        cout << 2 * n << " ";
    }
    cout << endl;

    return 0;
}