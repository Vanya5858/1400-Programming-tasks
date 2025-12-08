#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int m, x;
    int countMultiple3 = 0, countMultiple7 = 0;

    cout << "Введите количество чисел m: ";
    cin >> m;
    cout << "Введите " << m << " целых чисел: ";

    for (int i = 0; i < m; i++) {
        cin >> x;
        if (x % 3 == 0)
            countMultiple3++;
        if (x % 7 == 0)
            countMultiple7++;
    }

    cout << "Кратных 3: " << countMultiple3 << endl;
    cout << "Кратных 7: " << countMultiple7;
    return 0;
}