#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int team, duration;
    int removals1 = 0, removals2 = 0;
    int time1 = 0, time2 = 0;

    cout << "Введите данные по 24 удалениям (номер команды и время: 2, 5 или 10):\n";

    for (int i = 0; i < 24; i++) {
        cin >> team >> duration;

        if (team == 1) {
            removals1++;
            time1 += duration;
        }
        else if (team == 2) {
            removals2++;
            time2 += duration;
        }
    }

    cout << "\nКоманда 1:\n";
    cout << "  Количество удалений: " << removals1 << endl;
    cout << "  Общее время: " << time1 << " мин\n";

    cout << "\nКоманда 2:" << endl;
    cout << "  Количество удалений: " << removals2 << endl;
    cout << "  Общее время: " << time2 << " мин\n";

    return 0;
}