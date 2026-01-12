#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 22;
    int grades[n];

    cout << "Введите оценки по иностранному языку для " << n << " учеников:\n";
    for (int i = 0; i < n; i++) cin >> grades[i];

    int count5 = 0, count4 = 0, count3 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (grades[i] == 5) count5++;
        else if (grades[i] == 4) count4++;
        else if (grades[i] == 3) count3++;
        else if (grades[i] == 2) count2++;
    }

    cout << "Пятерок: " << count5 << ", четверок: " << count4
        << ", троек: " << count3 << ", двоек: " << count2 << endl;
    return 0;
}