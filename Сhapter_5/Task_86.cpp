#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int sum = 0;
    for (int i = 30; i < 100; i++) {
        if (i % 3 == 0 && (i % 10 == 2 || i % 10 == 4 || i % 10 == 8)) {
            sum += i;
        }
    }
    cout << "Сумма: " << sum << endl;
    return 0;
}