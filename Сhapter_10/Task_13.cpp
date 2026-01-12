#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    // Вариант 1: Каждый участник бросает кубик 2 раза
    cout << "\nВариант 1: 2 броска каждым игроком" << endl;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 2; i++) {
        sum1 += rand() % 6 + 1;
        sum2 += rand() % 6 + 1;
    }
    cout << "Игрок 1: " << sum1 << " очков" << endl;
    cout << "Игрок 2: " << sum2 << " очков" << endl;

    if (sum1 > sum2) {
        cout << "Победил Игрок 1!" << endl;
    }
    else if (sum2 > sum1) {
        cout << "Победил Игрок 2!" << endl;
    }
    else {
        cout << "Ничья!" << endl;
    }

    // Вариант 2: Несколько раундов с подсчётом побед
    cout << "\nВариант 2: Несколько раундов" << endl;
    cout << "Сколько раундов сыграть? ";
    int rounds;
    cin >> rounds;

    int wins1 = 0, wins2 = 0, draws = 0;
    for (int i = 0; i < rounds; i++) {
        int roll1 = rand() % 6 + 1;
        int roll2 = rand() % 6 + 1;

        if (roll1 > roll2) wins1++;
        else if (roll2 > roll1) wins2++;
        else draws++;
    }

    cout << "\nРезультаты за " << rounds << " раундов:" << endl;
    cout << "Побед Игрока 1: " << wins1 << endl;
    cout << "Побед Игрока 2: " << wins2 << endl;
    cout << "Ничьих: " << draws << endl;

    if (wins1 > wins2) {
        cout << "Общий победитель: Игрок 1!" << endl;
    }
    else if (wins2 > wins1) {
        cout << "Общий победитель: Игрок 2!" << endl;
    }
    else {
        cout << "Общая ничья!" << endl;
    }

    return 0;
}