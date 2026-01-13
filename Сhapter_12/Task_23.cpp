#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "информатика";
    string forma = word.substr(2, 5); 
    string pik = word.substr(6, 3);  

    cout << "Исходное слово: " << word << endl;
    cout << "Получено 'форма': " << forma << endl;
    cout << "Получено 'пик': " << pik << endl;

    return 0;
}