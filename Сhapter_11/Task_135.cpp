#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    int results[n];

    cout << "Введите очки за " << n << " игр (3 - выигрыш, 1 - ничья, 0 - проигрыш):\n";
    for (int i = 0; i < n; i++) cin >> results[i];

    int firstWin = -1, firstLoss = -1;

    for (int i = 0; i < n; i++) {
        if (results[i] == 3 && firstWin == -1) firstWin = i;
        if (results[i] == 0 && firstLoss == -1) firstLoss = i;
    }

    if (firstWin < firstLoss)
        cout << "Первый выигрыш был раньше первого проигрыша.\n";
    else if (firstWin > firstLoss)
        cout << "Первый проигрыш был раньше первого выигрыша.\n";
    else
        cout << "Нет выигрышей или проигрышей.\n";

    return 0;
}