#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите двузначное число: ";
    cin >> n;

    int first = n / 10;
    int second = n % 10;

    int sum_cubes = first * first * first + second * second * second;

    if (n * n == 4 * sum_cubes) {
        cout << "Квадрат числа равен учетверенной сумме кубов цифр\n";
    }
    else {
        cout << "Квадрат числа НЕ равен учетверенной сумме кубов цифр\n";
    }

    return 0;
}