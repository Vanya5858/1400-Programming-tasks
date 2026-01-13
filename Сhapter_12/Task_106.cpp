#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string str, old_substr, new_substr;
    cout << "Введите строку: ";
    getline(cin, str);
    cout << "Введите подстроку для замены: ";
    getline(cin, old_substr);
    cout << "Введите новую подстроку: ";
    getline(cin, new_substr);

    size_t pos = str.find(old_substr);
    while (pos != string::npos) {
        str.replace(pos, old_substr.length(), new_substr);
        pos = str.find(old_substr, pos + new_substr.length());
    }

    cout << "Результат: " << str << "\n";

    return 0;
}