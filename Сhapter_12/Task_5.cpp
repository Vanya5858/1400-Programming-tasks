#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string club;
    cout << "Введите название футбольного клуба: ";
    getline(cin, club);
    cout << "Количество символов: " << club.length() << endl;

    return 0;
}