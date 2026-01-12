#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Первые 100 простых чисел:" << endl;
    cout << "------------------------" << endl;

    int count = 0;
    int number = 2;

    while (count < 100) {
        bool isPrime = true;

        for (int d = 2; d * d <= number; d++) {
            if (number % d == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << number << " ";
            count++;

            if (count % 10 == 0) {
                cout << endl;
            }
        }

        number++;
    }

    cout << "\nВыведено " << count << " простых чисел" << endl;

    return 0;
}