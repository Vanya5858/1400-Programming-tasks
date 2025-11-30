#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;
    int count = 0;

    cout << "Введите 10 чисел (0 для досрочного завершения):\n";

    while (count < 10) {
        cin >> number;
        if (number == 0) {
            break;
        }
        count++;
    }

    cout << "Ввод завершен. Введено чисел: " << count << endl;

    return 0;
}