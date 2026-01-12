#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    int arr[100];

    cout << "n: ";
    cin >> n;

    cout << "Элементы: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            cout << "Первая пара: элементы " << i << " и " << i + 1
                << " (значение = " << arr[i] << ")";
            return 0;
        }
    }

    cout << "Нет одинаковых соседних элементов";
    return 0;
}