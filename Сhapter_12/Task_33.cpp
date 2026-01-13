#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string muha = "муха";
    string slon = muha;

    // Заменяем буквы
    for (size_t i = 0; i < slon.length(); i++) {
        if (slon[i] == 'м') slon[i] = 'с';
        else if (slon[i] == 'у') slon[i] = 'л';
        else if (slon[i] == 'х') slon[i] = 'о';
        else if (slon[i] == 'а') slon[i] = 'н';
    }

    cout << "Исходное слово: " << muha << endl;
    cout << "После замены букв: " << slon << endl;

    return 0;
}