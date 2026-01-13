#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string name, surname;
    cout << "Введите имя: ";
    getline(cin, name);
    cout << "Введите фамилию: ";
    getline(cin, surname);
    cout << "Полное имя: " << name << " " << surname << endl;

    return 0;
}
