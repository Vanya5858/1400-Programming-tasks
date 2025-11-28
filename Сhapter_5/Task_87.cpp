#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int count = 0;
    cout << "Числа от 100 до 500 с суммой цифр 15: ";
    for (int i = 100; i <= 500; i++) {
        int sum = i / 100 + (i / 10) % 10 + i % 10;
        if (sum == 15) {
            count++;
            if (count <= 10) cout << i << " "; // покажем первые 10 чисел
        }
    }
    if (count > 10) cout << "...";
    cout << "\nВсего чисел: " << count << endl;
    return 0;
}