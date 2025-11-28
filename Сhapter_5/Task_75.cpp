#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Целые числа от 100 до 200, кратные трем:\n";

    int count = 0;
    for (int i = 100; i <= 200; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
            count++;
            if (count % 10 == 0) cout << endl; // по 10 чисел в строке
        }
    }

    cout << "\nВсего чисел: " << count << endl;

    return 0;
}