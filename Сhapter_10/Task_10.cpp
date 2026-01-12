#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << "Игра: Чёт (2) или Нечёт (1)?" << endl;

    char choice;
    do {
        cout << "\nВведите 2 (чёт) или 1 (нечёт): ";
        int player;
        cin >> player;

        int computer = rand() % 10 + 1; // число 1-10

        cout << "Компьютер выбрал: " << computer << " (";
        cout << (computer % 2 == 0 ? "чётное" : "нечётное") << ")" << endl;

        if ((computer % 2 == 0 && player == 2) ||
            (computer % 2 == 1 && player == 1)) {
            cout << "Вы угадали!" << endl;
        }
        else {
            cout << "Вы не угадали." << endl;
        }

        cout << "\nПродолжить? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}