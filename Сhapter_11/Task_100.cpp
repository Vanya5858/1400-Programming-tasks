#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 22;
    int grades[n];

    cout << "Введите оценки по информатике для " << n << " учеников:\n";
    for (int i = 0; i < n; i++) cin >> grades[i];

    double sum = 0;
    for (int i = 0; i < n; i++) sum += grades[i];
    double avg = sum / n;

    int count = 0;
    cout << "Ученики с оценкой ниже средней (" << avg << "): ";
    for (int i = 0; i < n; i++) {
        if (grades[i] < avg) {
            cout << i + 1 << " ";
            count++;
        }
    }

    if (count == 0) cout << "нет";
    cout << endl << "Количество таких учеников: " << count << endl;

    return 0;
}