#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите трехзначное число: ";
    cin >> n;

    int first = n / 100;
    int second = (n / 10) % 10;
    int third = n % 10;

    // а) входит ли цифра 6
    if (first == 6 || second == 6 || third == 6) {
        cout << "а) Число содержит цифру 6\n";
    }
    else {
        cout << "а) Число не содержит цифру 6\n";
    }

    // б) входит ли цифра n
    int digit;
    cout << "Введите цифру для проверки: ";
    cin >> digit;
    if (first == digit || second == digit || third == digit) {
        cout << "б) Число содержит цифру " << digit << endl;
    }
    else {
        cout << "б) Число не содержит цифру " << digit << endl;
    }

    return 0;
}