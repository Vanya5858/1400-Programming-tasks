#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 12;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
    }

    cout << "Положительных: " << pos << ", отрицательных: " << neg << endl;
    return 0;
}