#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Сумма всех четных трехзначных чисел:\n";

    long long sum = 0;
    int count = 0;
    int first = -1, last = -1;

    for (int i = 100; i <= 999; i += 2) {
        sum += i;
        count++;
        if (first == -1) first = i;
        last = i;

        // Выводим прогрессию
        if (count <= 5) {
            cout << i;
            if (i < 108) cout << " + ";
        }
        else if (count == 6) {
            cout << " + ... + ";
        }
        else if (i > 990) {
            if (i < 999) cout << i << " + ";
            else cout << i;
        }
    }

    cout << " = " << sum << endl;
    cout << "Количество чисел: " << count << endl;
    
    return 0;
}