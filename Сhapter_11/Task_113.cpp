#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 100;
    int pages[n];

    cout << "Введите количество страниц для " << n << " книг:\n";
    for (int i = 0; i < n; i++) cin >> pages[i];

    int maxPages = pages[0];
    for (int i = 1; i < n; i++) {
        if (pages[i] > maxPages) maxPages = pages[i];
    }

    cout << "Количество страниц в самой толстой книге: " << maxPages << endl;

    return 0;
}