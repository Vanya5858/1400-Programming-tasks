#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string s1 = "Германия", s2 = "Италия";
    cout << "До обмена: s1 = " << s1 << ", s2 = " << s2 << endl;

    swap(s1, s2);

    cout << "После обмена: s1 = " << s1 << ", s2 = " << s2 << endl;

    return 0;
}