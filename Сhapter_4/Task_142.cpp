#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите количество полных месяцев, прошедших с 2010 года: ";
    cin >> n;

    int month = (n % 12) + 1; // +1 потому что прошло n месяцев и 2 дня

    switch (month) {
    case 1: cout << "январь"; break;
    case 2: cout << "февраль"; break;
    case 3: cout << "март"; break;
    case 4: cout << "апрель"; break;
    case 5: cout << "май"; break;
    case 6: cout << "июнь"; break;
    case 7: cout << "июль"; break;
    case 8: cout << "август"; break;
    case 9: cout << "сентябрь"; break;
    case 10: cout << "октябрь"; break;
    case 11: cout << "ноябрь"; break;
    case 12: cout << "декабрь"; break;
    }
    return 0;
}