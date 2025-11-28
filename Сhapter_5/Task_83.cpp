#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Сумма положительных нечетных чисел, меньших 50:\n";

    int sum = 0;
    int count = 0;

    for (int i = 1; i < 50; i += 2) {
        sum += i;
        count++;
        cout << i;
        if (i < 49) cout << " + ";
    }

    cout << " = " << sum << endl;
    cout << "Количество слагаемых: " << count << endl;

    return 0;
}