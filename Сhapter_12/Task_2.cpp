#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string country, capital;
    cout << "Введите название государства: ";
    getline(cin, country);
    cout << "Введите столицу: ";
    getline(cin, capital);
    cout << "Столица государства " << country << " – город " << capital << endl;

    return 0;
}