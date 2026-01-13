#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string stars(5, '*');
    cout << "Строка из 5 звездочек: " << stars << "\n";

    return 0;
}