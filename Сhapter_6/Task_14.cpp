#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int i = 100;

    cout << "Числа от 100 до 80:\n";
    while (i >= 80) {
        cout << i << " ";
        i--;
    }
    cout << endl;

    return 0;
}