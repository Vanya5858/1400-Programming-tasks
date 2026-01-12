#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << fixed << setprecision(2);

    // 100 подбрасываний
    int count0 = 0, count1 = 0;
    for (int i = 0; i < 100; i++) {
        if (rand() % 2 == 0) count0++;
        else count1++;
    }
    cout << "100 подбрасываний:" << endl;
    cout << "Решка: " << count0 << " (" << (count0 / 100.0) * 100 << "%)" << endl;
    cout << "Орёл: " << count1 << " (" << (count1 / 100.0) * 100 << "%)" << endl;

    // 1000 подбрасываний
    count0 = count1 = 0;
    for (int i = 0; i < 1000; i++) {
        if (rand() % 2 == 0) count0++;
        else count1++;
    }
    cout << "\n1000 подбрасываний:" << endl;
    cout << "Решка: " << count0 << " (" << (count0 / 1000.0) * 100 << "%)" << endl;
    cout << "Орёл: " << count1 << " (" << (count1 / 1000.0) * 100 << "%)" << endl;

    return 0;
}