#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    cout << "Нечетные числа из интервала [10, 100]:\n";

    // Вариант 1: с условным оператором
    cout << "Способ 1 (с условным оператором):\n";
    for (int i = 10; i <= 100; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Вариант 2: без условного оператора
    cout << "Способ 2 (без условного оператора):\n";
    for (int i = 11; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}