#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(0));

    cout << fixed << setprecision(2);

    const int TRIALS = 100;
    int counts[7] = { 0 }; // индексы 1-6

    cout << TRIALS << " бросаний кубика:" << endl;
    for (int i = 0; i < TRIALS; i++) {
        int dice = rand() % 6 + 1;
        counts[dice]++;
    }

    cout << "Число\tКоличество\tЧастота (%)" << endl;
    for (int i = 1; i <= 6; i++) {
        double freq = (counts[i] * 100.0) / TRIALS;
        cout << i << "\t" << counts[i] << "\t\t" << freq << endl;
    }

    // Дополнительно: 1000 бросаний
    cout << "\n" << (TRIALS * 10) << " бросаний кубика:" << endl;
    for (int i = 1; i <= 6; i++) counts[i] = 0;

    for (int i = 0; i < TRIALS * 10; i++) {
        int dice = rand() % 6 + 1;
        counts[dice]++;
    }

    cout << "Число\tКоличество\tЧастота (%)" << endl;
    for (int i = 1; i <= 6; i++) {
        double freq = (counts[i] * 100.0) / (TRIALS * 10);
        cout << i << "\t" << counts[i] << "\t\t" << freq << endl;
    }

    return 0;
}