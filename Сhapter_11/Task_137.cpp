#include <iostream>
#include <climits>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];

    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // a) Максимальный и второй максимальный
    int max1 = INT_MIN, max2 = INT_MIN;
    int max1Index = -1, max2Index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max2Index = max1Index;
            max1 = arr[i];
            max1Index = i;
        }
        else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
            max2Index = i;
        }
        else if (arr[i] == max1 && max2 == INT_MIN) {
            max2 = arr[i];
            max2Index = i;
        }
    }

    cout << "Максимальный элемент: " << max1 << endl;
    if (max2Index != -1)
        cout << "Второй максимальный: " << max2 << endl;
    else
        cout << "Второго максимального нет\n";

    // б) Минимальный и второй минимальный
    int min1 = INT_MAX, min2 = INT_MAX;
    int min1Index = -1, min2Index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min2Index = min1Index;
            min1 = arr[i];
            min1Index = i;
        }
        else if (arr[i] < min2 && arr[i] > min1) {
            min2 = arr[i];
            min2Index = i;
        }
        else if (arr[i] == min1 && min2 == INT_MAX) {
            min2 = arr[i];
            min2Index = i;
        }
    }

    cout << "Минимальный элемент: " << min1 << endl;
    if (min2Index != -1)
        cout << "Второй минимальный: " << min2 << endl;
    else
        cout << "Второго минимального нет\n";

    // в) и г) номера
    cout << "Номер максимального: " << max1Index << endl;
    if (max2Index != -1)
        cout << "Номер второго максимального: " << max2Index << endl;

    cout << "Номер минимального: " << min1Index << endl;
    if (min2Index != -1)
        cout << "Номер второго минимального: " << min2Index << endl;

    return 0;
}