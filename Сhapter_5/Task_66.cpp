#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int total_sum = 0;

    for (int n = 1; n <= 12; n++) {
        int square = 0;
        int odd_number = 1;

        for (int i = 0; i < n; i++) {
            square += odd_number;
            odd_number += 2;
        }

        total_sum += square;
    }

    cout << "Сумма 1^2 + 2^2 + ... + 12^2 = " << total_sum << endl;

    return 0;
}