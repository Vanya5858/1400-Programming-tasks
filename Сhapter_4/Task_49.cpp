#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n, a;
    cout << "Введите двузначное число: ";
    cin >> n;
    cout << "Введите цифру a: ";
    cin >> a;

    int first = n / 10;
    int second = n % 10;

    // а) входит ли цифра 3
    if (first == 3 || second == 3) {
        cout << "а) Число содержит цифру 3\n";
    }
    else {
        cout << "а) Число не содержит цифру 3\n";
    }

    // б) входит ли цифра a
    if (first == a || second == a) {
        cout << "б) Число содержит цифру " << a << endl;
    }
    else {
        cout << "б) Число не содержит цифру " << a << endl;
    }

    return 0;
}