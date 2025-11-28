#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    int n, d;
    cout << "Введите натуральное число: ";
    cin >> n;
    cout << "Введите число d: ";
    cin >> d;

    cout << "\nа) Все делители числа " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }

    cout << "\nб) Сумма делителей: ";
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    cout << sum;

    cout << "\nв) Сумма четных делителей: ";
    int sum_even = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 == 0) {
            sum_even += i;
        }
    }
    cout << sum_even;

    cout << "\nг) Количество делителей: ";
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    cout << count;

    cout << "\nд) Количество нечетных делителей: ";
    int count_odd = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 != 0) {
            count_odd++;
        }
    }
    cout << count_odd;

    cout << "\nе) Четных делителей: " << (count - count_odd) << ", нечетных: " << count_odd;

    cout << "\nж) Количество делителей, больших " << d << ": ";
    int count_greater = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i > d) {
            count_greater++;
        }
    }
    cout << count_greater << endl;

    return 0;
}