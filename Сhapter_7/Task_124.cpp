#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int N_TEAMS = 20;
    int points[N_TEAMS];

    cout << "Введите очки 20 команд (по убыванию): ";
    for (int i = 0; i < N_TEAMS; i++) {
        cin >> points[i];
    }
    
    int target;
    cout << "Введите количество очков команды N: ";
    cin >> target;

    int place = 1;
    while (place <= N_TEAMS && points[place - 1] > target) {
        place++;
    }

    cout << "Команда заняла " << place << " место\n";
    return 0;
}