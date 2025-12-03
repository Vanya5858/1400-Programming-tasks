#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите возраст (1-99): ";
    cin >> n;

    cout << "мне " << n << " ";

    if (n % 10 == 1 && n != 11) {
        cout << "год";
    }
    else if ((n % 10 >= 2 && n % 10 <= 4) && (n < 10 || n > 20)) {
        cout << "года";
    }
    else {
        cout << "лет";
    }
    cout << endl;

    return 0;
}
