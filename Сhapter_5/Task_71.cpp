#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    double result = 0.0;

    // Вычисляем с конца для стабильности
    for (int i = 50; i >= 1; i--) {
        result = sqrt(i + result);
    }

    cout << "sqrt(1 + sqrt(2 + sqrt(3 + ... + sqrt(50)))) = " << result << endl;

    return 0;
}