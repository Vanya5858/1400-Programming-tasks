#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int s;
    cout << "Введите s (0 < s <= 27): ";
    cin >> s;

    int count = 0;
    for (int i = 100; i <= 999; i++) {
        int sum = i / 100 + (i / 10) % 10 + i % 10;
        if (sum == s) {
            count++;
        }
    }
    cout << "Трехзначных чисел с суммой цифр " << s << ": " << count << endl;
    return 0;
}