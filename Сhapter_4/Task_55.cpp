#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    int n;
    cout << "Введите четырехзначное число: ";
    cin >> n;

    int first = n / 1000;
    int second = (n / 100) % 10;
    int third = (n / 10) % 10;
    int fourth = n % 10;

    // а) входят ли цифры 2 или 7
    if (first == 2 || first == 7 || second == 2 || second == 7 || third == 2 || third == 7 || fourth == 2 || fourth == 7) {
        cout << "а) Число содержит цифру 2 или 7\n";
    }
    else {
        cout << "а) Число не содержит цифру 2 или 7\n";
    }

    // б) входят ли цифры 3, 6 или 9
    if (first == 3 || first == 6 || first == 9 || second == 3 || second == 6 || second == 9 || third == 3 || third == 6 || third == 9 || fourth == 3 || fourth == 6 || fourth == 9) {
        cout << "б) Число содержит цифру 3, 6 или 9\n";
    }
    else {
        cout << "б) Число не содержит цифру 3, 6 или 9\n";
    }

    return 0;
}