#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int N = 100;
    double distance_from_home = 0.0;
    double total_path = 0.0;

    for (int k = 1; k <= N; k++) {
        // Расстояние от дома
        if (k % 2 == 1) { // нечётный k: движение к работе (+)
            distance_from_home += 1.0 / k;
        }
        else { // чётный k: движение к дому (-)
            distance_from_home -= 1.0 / k;
        }

        // Общий путь
        total_path += 1.0 / k;
    }

    cout << "а) Расстояние от дома после " << N << " этапов: " << distance_from_home << " км\n";
    cout << "б) Общий пройденный путь: " << total_path << " км\n";

    return 0;
}