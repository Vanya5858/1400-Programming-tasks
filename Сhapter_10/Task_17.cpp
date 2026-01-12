#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    // Выбираем 2 разные кости домино
    int bones[2][2];

    // Первая кость
    bones[0][0] = rand() % 7;
    bones[0][1] = rand() % 7;

    // Вторая кость
    do {
        bones[1][0] = rand() % 7;
        bones[1][1] = rand() % 7;
    } while (bones[0][0] == bones[1][0] && bones[0][1] == bones[1][1]);

    cout << "Выбраны кости:" << endl;
    cout << "1) " << bones[0][0] << "-" << bones[0][1] << endl;
    cout << "2) " << bones[1][0] << "-" << bones[1][1] << endl;

    // Проверяем, можно ли приставить кости
    bool canConnect = false;
    if (bones[0][0] == bones[1][0] || bones[0][0] == bones[1][1] ||
        bones[0][1] == bones[1][0] || bones[0][1] == bones[1][1]) {
        canConnect = true;
    }

    if (canConnect) {
        cout << "Кости можно приставить друг к другу по правилам домино." << endl;
    }
    else {
        cout << "Кости нельзя приставить друг к другу." << endl;
    }

    return 0;
}