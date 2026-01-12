#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    const int n = 15;
    int ages[n];

    cout << "Введите возраст " << n << " человек:\n";
    for (int i = 0; i < n; i++) cin >> ages[i];

    int maxAge = ages[0], minAge = ages[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (ages[i] > maxAge) {
            maxAge = ages[i];
            maxIndex = i;
        }
        if (ages[i] < minAge) {
            minAge = ages[i];
            minIndex = i;
        }
    }

    if (maxIndex < minIndex)
        cout << "Самый старший указан раньше самого молодого.\n";
    else if (maxIndex > minIndex)
        cout << "Самый молодой указан раньше самого старшего.\n";
    else
        cout << "Один человек и самый старший, и самый молодой.\n";

    return 0;
}