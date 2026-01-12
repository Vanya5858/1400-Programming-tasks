#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << "Два игрока бросают кубик:" << endl;

    int player1 = rand() % 6 + 1;
    int player2 = rand() % 6 + 1;

    cout << "Игрок 1: " << player1 << endl;
    cout << "Игрок 2: " << player2 << endl;

    if (player1 > player2) {
        cout << "Победил Игрок 1!" << endl;
    }
    else if (player2 > player1) {
        cout << "Победил Игрок 2!" << endl;
    }
    else {
        cout << "Ничья!" << endl;
    }

    return 0;
}