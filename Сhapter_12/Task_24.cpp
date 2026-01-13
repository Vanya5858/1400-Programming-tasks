#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word = "вертикаль";
    string tir = word.substr(5, 3); 
    string vetka = word.substr(0, 3) + word.substr(6, 3); 

    cout << "Исходное слово: " << word << endl;
    cout << "Получено 'тир': " << tir << endl;
    cout << "Получено 'ветка': " << vetka << endl;

    return 0;
}