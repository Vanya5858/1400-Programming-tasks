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

    if (first == 6 || second == 6 || third == 6) {
        cout << "Число содержит цифру 6\n";
    }
    else {
        cout << "Число не содержит цифру 6\n";
    }

    return 0;
}