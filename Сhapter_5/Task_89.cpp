#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int count = 0;
    cout << "Трехзначные числа, кратные 7 с суммой цифр кратной 7: ";
    for (int i = 100; i <= 999; i++) {
        if (i % 7 == 0) {
            int sum = i / 100 + (i / 10) % 10 + i % 10;
            if (sum % 7 == 0) {
                count++;
                if (count <= 5) cout << i << " "; // покажем первые 5 чисел
            }
        }
    }
    if (count > 5) cout << "...";
    cout << "\nВсего чисел: " << count << endl;
    return 0;
}