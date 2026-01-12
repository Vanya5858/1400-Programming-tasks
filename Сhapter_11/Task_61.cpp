#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int sumEvenPos = 0;
    for (int i = 1; i < n; i += 2) sumEvenPos += arr[i];

    cout << "Сумма элементов на чётных позициях (2-й, 4-й, ...): " << sumEvenPos << endl;

    return 0;
}