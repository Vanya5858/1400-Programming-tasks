#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите целое число: ";
    cin >> n;

    int next_even = n + 1;
    if (next_even % 2 != 0) {
        next_even++;
    }

    cout << "Следующее четное число: " << next_even << endl;

    return 0;
}