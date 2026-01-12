#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " ненулевых целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int signChanges = 0;
    for (int i = 0; i < n - 1; i++) {
        if ((arr[i] > 0 && arr[i + 1] < 0) || (arr[i] < 0 && arr[i + 1] > 0)) {
            signChanges++;
        }
    }

    cout << "Количество смен знака: " << signChanges << endl;

    return 0;
}