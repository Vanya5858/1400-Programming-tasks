#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int SIZE = 20;
    int points[SIZE] = { 56, 54, 52, 50, 48, 47, 45, 43, 42, 40,
                        38, 36, 35, 33, 32, 30, 28, 27, 25, 24 };
    int n = 42; // очки команды

    cout << "Очки команд (по убыванию): ";
    for (int i = 0; i < SIZE; i++) {
        cout << points[i] << " ";
    }
    cout << "\nОчки искомой команды: " << n << endl;

    // Находим место команды
    int place = 1;
    for (int i = 0; i < SIZE; i++) {
        // Без if: увеличиваем место, если текущая команда имеет больше очков
        place += (points[i] > n);
    }

    cout << "Команда с " << n << " очками заняла " << place << "-е место" << endl;

    return 0;
}