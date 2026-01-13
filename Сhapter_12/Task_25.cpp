#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "программа";
    string rom = word.substr(2, 3);   
    string rampa = word.substr(3, 5); 

    cout << "Исходное слово: " << word << endl;
    cout << "Получено 'ром': " << rom << endl;
    cout << "Получено 'рампа': " << rampa << endl;

    return 0;
}