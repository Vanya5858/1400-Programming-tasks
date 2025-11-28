#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Четырехзначные числа, которые при делении на 133 дают остаток 125, а при делении на 134 дают остаток 111:\n";

    int count = 0;
    for (int i = 1000; i <= 9999; i++) {
        if (i % 133 == 125 && i % 134 == 111) {
            cout << i << " ";
            count++;
            if (count % 5 == 0) cout << endl;
        }
    }

    cout << "\nВсего чисел: " << count << endl;

    // Проверка для найденных чисел
    if (count > 0) {
        cout << "\nПроверка:\n";
        for (int i = 1000; i <= 9999; i++) {
            if (i % 133 == 125 && i % 134 == 111) {
                cout << i << " / 133 = " << i / 133 << " (ост. " << i % 133 << "), ";
                cout << i << " / 134 = " << i / 134 << " (ост. " << i % 134 << ")\n";
            }
        }
    }

    return 0;
}