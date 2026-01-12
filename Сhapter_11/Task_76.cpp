#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int grades[n];

    cout << "Введите оценки по 10 предметам:\n";
    for (int i = 0; i < n; i++) cin >> grades[i];

    int count4 = 0, count5 = 0;
    for (int i = 0; i < n; i++) {
        if (grades[i] == 4) count4++;
        else if (grades[i] == 5) count5++;
    }

    cout << "Четверок: " << count4 << ", пятерок: " << count5 << endl;
    return 0;
}