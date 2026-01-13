#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string club;
    cout << "Введите название футбольного клуба: ";
    getline(cin, club);

    cout << "Название столбиком:\n";
    for (size_t i = 0; i < club.length(); i++) {
        cout << club[i] << "\n";
    }

    return 0;
}