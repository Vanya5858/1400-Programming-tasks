#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    int n, b;
    cout << "Введите четырехзначное число: ";
    cin >> n;
    cout << "Введите цифру b: ";
    cin >> b;

    int first = n / 1000;
    int second = (n / 100) % 10;
    int third = (n / 10) % 10;
    int fourth = n % 10;

    // а) входит ли цифра 4
    if (first == 4 || second == 4 || third == 4 || fourth == 4) {
        cout << "а) Число содержит цифру 4\n";
    }
    else {
        cout << "а) Число не содержит цифру 4\n";
    }

    // б) входит ли цифра b
    if (first == b || second == b || third == b || fourth == b) {
        cout << "б) Число содержит цифру " << b << endl;
    }
    else {
        cout << "б) Число не содержит цифру " << b << endl;
    }

    return 0;
}