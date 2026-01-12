#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 12;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] % 10 == 0 && arr[i + 1] % 10 == 0) count++;
    }

    cout << "Число пар соседних элементов, оканчивающихся нулем: " << count << endl;
    return 0;
}