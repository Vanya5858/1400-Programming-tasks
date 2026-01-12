#include <iostream>
#include <climits>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 20;
    int points[n];

    cout << "Введите количество очков " << n << " команд:\n";
    for (int i = 0; i < n; i++) cin >> points[i];

    int max1 = -1, max2 = -1;
    int team1 = -1, team2 = -1;

    for (int i = 0; i < n; i++) {
        if (points[i] > max1) {
            max2 = max1;
            team2 = team1;
            max1 = points[i];
            team1 = i;
        }
        else if (points[i] > max2 && points[i] < max1) {
            max2 = points[i];
            team2 = i;
        }
        else if (points[i] == max1 && max2 == -1) {
            max2 = points[i];
            team2 = i;
        }
    }

    cout << "Первое место: команда " << team1 + 1 << " (" << max1 << " очков)\n";
    cout << "Второе место: команда " << team2 + 1 << " (" << max2 << " очков)\n";

    return 0;
}