#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    const int TEAMS = 20;
    int wins[TEAMS];

    // Ввод данных о победах
    cout << "Введите количество побед для каждой из " << TEAMS << " команд:" << endl;
    for (int i = 0; i < TEAMS; i++) {
        cout << "Команда " << i + 1 << ": ";
        cin >> wins[i];
    }

    cout << "\nКоманды с менее чем 3 победами:" << endl;

    bool found = false;
    for (int i = 0; i < TEAMS; i++) {
        if (wins[i] < 3) {
            cout << "Команда " << i + 1 << ": " << wins[i] << " побед" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Все команды имеют 3 и более побед" << endl;
    }

    return 0;
}