#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string city;
    cout << "Введите название города: ";
    getline(cin, city);
    int len = city.length();
    if (len % 2 == 0) {
        cout << "Количество символов четное (" << len << ")" << endl;
    }
    else {
        cout << "Количество символов нечетное (" << len << ")" << endl;
    }

    return 0;
}