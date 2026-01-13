#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "яблоко";
    string block = word.substr(1, 4); 
    string oko = word.substr(3, 3); 

    cout << "Исходное слово: " << word << endl;
    cout << "Получено 'блок': " << block << endl;
    cout << "Получено 'око': " << oko << endl;

    return 0;
}