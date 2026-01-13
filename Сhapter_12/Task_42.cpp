#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string s, t = "";
    cout << "Введите слово s: ";
    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--) {
        t += s[i];
    }

    cout << "Слово t (обратное s): " << t << "\n";

    return 0;
}