#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int solutions = 0;

    for (int x = 1; x <= 30; x++) {
        for (int y = x; y <= 30; y++) {  // y >= x чтобы избежать перестановок
            int sum = x * x + y * y;

            // Проверяем, является ли сумма полным квадратом
            for (int k = 1; k <= 30; k++) {
                if (k * k == sum) {
                    cout << x << "\t" << y << "\t" << k << endl;
                    cout << "  " << x << "^2 + " << y << "^2 = " << k << "^2" << endl;
                    cout << "  " << x * x << " + " << y * y << " = " << k * k << endl << endl;
                    solutions++;
                    break;
                }
            }
        }
    }

    cout << "Всего решений: " << solutions << endl;

    // Известные пифагоровы тройки
    cout << "\nИзвестные пифагоровы тройки в этом диапазоне:" << endl;
    cout << "3-4-5, 5-12-13, 6-8-10, 7-24-25, 8-15-17, 9-12-15," << endl;
    cout << "10-24-26, 12-16-20, 15-20-25, 18-24-30, 20-21-29" << endl;

    return 0;
}