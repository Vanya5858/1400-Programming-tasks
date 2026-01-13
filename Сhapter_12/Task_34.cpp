#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string tetrad = "тетрадь";
    string dnevnik = tetrad;

    // Заменяем буквы
    for (size_t i = 0; i < dnevnik.length(); i++) {
        if (dnevnik[i] == 'т') dnevnik[i] = 'д';
        else if (dnevnik[i] == 'е') dnevnik[i] = 'н';
        else if (dnevnik[i] == 'р') dnevnik[i] = 'е';
        else if (dnevnik[i] == 'а') dnevnik[i] = 'в';
        else if (dnevnik[i] == 'д') dnevnik[i] = 'и';
        else if (dnevnik[i] == 'ь') dnevnik[i] = 'к';
    }

    cout << "Исходное слово: " << tetrad << endl;
    cout << "После замены букв: " << dnevnik << endl;

    return 0;
}