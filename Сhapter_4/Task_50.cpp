#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите двузначное число: ";
    cin >> n;

    int first = n / 10;
    int second = n % 10;

    // а) входят ли цифры 4 или 7
    if (first == 4 || first == 7 || second == 4 || second == 7) {
        cout << "а) Число содержит цифру 4 или 7\n";
    }
    else {
        cout << "а) Число не содержит цифру 4 или 7\n";
    }

    // б) входят ли цифры 3, 6 или 9
    if (first == 3 || first == 6 || first == 9 || second == 3 || second == 6 || second == 9) {
        cout << "б) Число содержит цифру 3, 6 или 9\n";
    }
    else {
        cout << "б) Число не содержит цифру 3, 6 или 9\n";
    }

    return 0;
}