#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
    cout << "\t\t\t\t\t";
    system("chcp 1251");

    string FootballName;
    cout << "Введите название футбольной команды: ";
    getline(cin, FootballName);
    cout << FootballName << " – это чемпион!";
    return 0;
}