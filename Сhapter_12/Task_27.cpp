#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "клоун";
    string uklon = word.substr(2, 4) + word.substr(1, 1);
    string kulon = word.substr(1, 1) + word.substr(2, 4); 
    string kolun = word.substr(0, 2) + word.substr(3, 2);

    cout << "Исходное слово: " << word << endl;
    cout << "Получено 'уклон': " << uklon << endl;
    cout << "Получено 'кулон': " << kulon << endl;
    cout << "Получено 'колун': " << kolun << endl;

    return 0;
}