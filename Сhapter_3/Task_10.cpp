#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k, d, n;

    // Ввод данных
    cout << "Введите номер дня года k (1-365): ";
    cin >> k;

    // Проверка корректности данных
    if (k < 1 || k > 365) {
        cout << "Ошибка: k должно быть от 1 до 365!\n";
        return 1;
    }

    // а) 1 января - понедельник
    n = (k - 1) % 7;  // 0-воскр, 1-пн, 2-вт, ..., 6-суб
    cout << "\nа) Если 1 января - понедельник:\n";
    cout << "   " << k << "-й день года - ";
    switch (n) {
    case 0: cout << "воскресенье (n=0)"; break;
    case 1: cout << "понедельник (n=1)"; break;
    case 2: cout << "вторник (n=2)"; break;
    case 3: cout << "среда (n=3)"; break;
    case 4: cout << "четверг (n=4)"; break;
    case 5: cout << "пятница (n=5)"; break;
    case 6: cout << "суббота (n=6)"; break;
    }
    cout << endl;

    // б) 1 января - вторник
    n = (k - 1 + 1) % 7;  // +1 сдвиг для вторника
    cout << "\nб) Если 1 января - вторник:\n";
    cout << "   " << k << "-й день года - ";
    switch (n) {
    case 0: cout << "воскресенье (n=0)"; break;
    case 1: cout << "понедельник (n=1)"; break;
    case 2: cout << "вторник (n=2)"; break;
    case 3: cout << "среда (n=3)"; break;
    case 4: cout << "четверг (n=4)"; break;
    case 5: cout << "пятница (n=5)"; break;
    case 6: cout << "суббота (n=6)"; break;
    }
    cout << endl;

    // в) 1 января - d-й день недели
    cout << "\nВведите день недели 1 января d (1-пн, 2-вт, ..., 7-вс): ";
    cin >> d;

    if (d < 1 || d > 7) {
        cout << "Ошибка: d должно быть от 1 до 7!\n";
        return 1;
    }

    n = (k - 1 + (d - 1)) % 7;  // сдвиг на (d-1) дней
    cout << "\nв) Если 1 января - " << d << "-й день недели:\n";
    cout << "   " << k << "-й день года - ";
    switch (n) {
    case 0: cout << "воскресенье (n=0)"; break;
    case 1: cout << "понедельник (n=1)"; break;
    case 2: cout << "вторник (n=2)"; break;
    case 3: cout << "среда (n=3)"; break;
    case 4: cout << "четверг (n=4)"; break;
    case 5: cout << "пятница (n=5)"; break;
    case 6: cout << "суббота (n=6)"; break;
    }
    cout << endl;

    return 0;
}