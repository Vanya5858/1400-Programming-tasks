#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 35;
    int books[n];

    cout << "Введите количество книг в каждом из " << n << " разделов:\n";
    for (int i = 0; i < n; i++) cin >> books[i];

    int total = 0;
    for (int i = 0; i < n; i++) total += books[i];

    if (total >= 100000 && total <= 999999)
        cout << "Общее число книг шестизначное.\n";
    else
        cout << "Общее число книг не шестизначное.\n";

    return 0;
}