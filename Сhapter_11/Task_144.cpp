#include <iostream>
#include <climits>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int floors = 15;
    int residents[floors];

    cout << "Введите количество жильцов на каждом из " << floors << " этажей:\n";
    for (int i = 0; i < floors; i++) cin >> residents[i];

    int min1 = INT_MAX, min2 = INT_MAX;
    int floor1 = -1, floor2 = -1;

    for (int i = 0; i < floors; i++) {
        if (residents[i] < min1) {
            min2 = min1;
            floor2 = floor1;
            min1 = residents[i];
            floor1 = i;
        }
        else if (residents[i] < min2 && residents[i] > min1) {
            min2 = residents[i];
            floor2 = i;
        }
        else if (residents[i] == min1 && min2 == INT_MAX) {
            min2 = residents[i];
            floor2 = i;
        }
    }

    cout << "Меньше всего жильцов на этажах: " << floor1 + 1 << " и " << floor2 + 1 << "\n";
    cout << "Количество жильцов: " << min1 << " и " << min2 << "\n";

    return 0;
}