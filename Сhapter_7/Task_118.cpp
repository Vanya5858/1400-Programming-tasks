#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;

    int firstIndex = -1, lastIndex = -1;

    cout << "Введите " << n << " целых чисел: ";
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        if (num == 10) {
            if (firstIndex == -1) firstIndex = i;
            lastIndex = i;
        }
    }

    if (firstIndex != -1) {
        cout << "Номер первого числа 10: " << firstIndex << endl;
        cout << "Номер последнего числа 10: " << lastIndex << endl;
    }
    else {
        cout << "Числа 10 не найдены\n";
    }

    return 0;
}