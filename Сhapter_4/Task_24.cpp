#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите натуральное число: ";
    cin >> n;

    // а) является ли число четным
    if (n % 2 == 0) {
        cout << "а) Число четное\n";
    }
    else {
        cout << "а) Число нечетное\n";
    }

    // б) оканчивается ли число цифрой 7
    if (n % 10 == 7) {
        cout << "б) Число оканчивается на 7\n";
    }
    else {
        cout << "б) Число не оканчивается на 7\n";
    }

    return 0;
}