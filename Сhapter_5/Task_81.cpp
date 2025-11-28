#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    //а) Числа, квадраты которых оканчиваются тремя цифрами числа
    cout << "а) Трехзначные числа, квадраты которых оканчиваются тремя цифрами числа:\n";
    int count_a = 0;
    for (int i = 100; i <= 999; i++) {
        long long square = (long long)i * i;
        int last_three = square % 1000;
        if (last_three == i) {
            cout << i << "^2 = " << square << " (оканчивается на " << i << ")\n";
            count_a++;
        }
    }
    cout << "Всего: " << count_a << " чисел\n";

    //б) Числа, кратные 7 с суммой цифр кратной 7
    cout << "\nб) Трехзначные числа, кратные 7 и с суммой цифр кратной 7:\n";
    int count_b = 0;
    for (int i = 100; i <= 999; i++) {
        if (i % 7 == 0) {
            int sum_digits = (i / 100) + ((i / 10) % 10) + (i % 10);
            if (sum_digits % 7 == 0) {
                cout << i << " ";
                count_b++;
                if (count_b % 10 == 0) cout << endl;
            }
        }
    }
    cout << "\nВсего: " << count_b << " чисел\n";
    return 0;
}