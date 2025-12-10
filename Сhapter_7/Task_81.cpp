#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int num, twoDigitCount = 0;

    cout << "Введите последовательность чисел (двузначное число кодирует забитые и пропущенные):\n";

    for (int i = 0; i < 20; i++) {
        cin >> num;

        // Разделяем двузначное число на цифры
        int scored = num / 10;
        int conceded = num % 10;

        if (scored > conceded)
            cout << "выигрыш\n";
        else if (scored < conceded)
            cout << "проигрыш\n";
        else
            cout << "ничья\n";
    }

    return 0;
}