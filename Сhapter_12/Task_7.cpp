#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string surname1, surname2;
    cout << "Введите первую фамилию: ";
    getline(cin, surname1);
    cout << "Введите вторую фамилию: ";
    getline(cin, surname2);

    if (surname1.length() > surname2.length()) {
        cout << "Первая фамилия длиннее" << endl;
    }
    else if (surname2.length() > surname1.length()) {
        cout << "Вторая фамилия длиннее" << endl;
    }
    else {
        cout << "Фамилии одинаковой длины" << endl;
    }

    return 0;
}