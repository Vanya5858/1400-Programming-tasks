#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "прос";
    string sorta = word.substr(1, 4) + "а";  
    string rost = word.substr(2, 3) + "т";  
    string tors = word.substr(3, 1) + word.substr(2, 1) + word.substr(1, 1) + word.substr(0, 1);

    cout << "Исходное слово: " << word << endl;
    cout << "Получено 'сорта': " << sorta << endl;
    cout << "Получено 'рост': " << rost << endl;
    cout << "Получено 'торс': " << tors << endl;

    return 0;
}