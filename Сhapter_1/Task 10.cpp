#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
    cout << "\t\t\t\t\t";
    system("chcp 1251");
    
    string name;
    cout << "Введите своё имя: ";
    getline(cin, name);
    cout << "Ваше имя: " << name;
    return 0;
}