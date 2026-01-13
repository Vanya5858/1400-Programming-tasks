#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string underscores(8, '_');
    cout << "Строка из 8 символов '_': " << underscores << "\n";

    return 0;
}