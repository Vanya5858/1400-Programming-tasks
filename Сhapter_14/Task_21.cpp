#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int num) {
    if (num < 0) return false;
    int root = sqrt(num);
    return root * root == num;
}

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите количество чисел: ";
    cin >> n;

    int count = 0;
    cout << "Введите " << n << " целых чисел:" << endl;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (isPerfectSquare(num)) {
            count++;
        }
    }

    cout << "\nКоличество полных квадратов: " << count << endl;

    return 0;
}