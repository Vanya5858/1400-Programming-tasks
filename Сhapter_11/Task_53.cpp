#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 42;
    int students[n];

    cout << "Введите численность учеников в каждом из " << n << " классов:\n";
    for (int i = 0; i < n; i++) cin >> students[i];

    int total = 0;
    for (int i = 0; i < n; i++) total += students[i];

    if (total >= 1000 && total <= 9999)
        cout << "Общее число учеников четырёхзначное.\n";
    else
        cout << "Общее число учеников не четырёхзначное.\n";

    return 0;
}