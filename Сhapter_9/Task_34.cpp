#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int n;
    cout << "Введите сумму n (n < 100): ";
    cin >> n;

    // а) Число способов выплаты
    int ways = 0;
    cout << "\nа) Подсчет числа способов:" << endl;

    for (int ten = 0; ten <= n / 10; ten++) {
        for (int five = 0; five <= (n - ten * 10) / 5; five++) {
            for (int two = 0; two <= (n - ten * 10 - five * 5) / 2; two++) {
                int one = n - ten * 10 - five * 5 - two * 2;
                if (one >= 0) {
                    ways++;
                }
            }
        }
    }

    cout << "Число способов выплаты: " << ways << endl;

    // б) Все способы выплаты
    cout << "\nб) Все способы выплаты:" << endl;
    cout << "10р\t5р\t2р\t1р" << endl;
    cout << "----------------------" << endl;

    int count = 0;
    for (int ten = 0; ten <= n / 10; ten++) {
        for (int five = 0; five <= (n - ten * 10) / 5; five++) {
            for (int two = 0; two <= (n - ten * 10 - five * 5) / 2; two++) {
                int one = n - ten * 10 - five * 5 - two * 2;
                if (one >= 0) {
                    cout << ten << "\t" << five << "\t" << two << "\t" << one << endl;
                    count++;
                }
            }
        }
    }

    cout << "\nВсего способов: " << count << endl;

    return 0;
}