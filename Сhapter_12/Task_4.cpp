#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string s1 = "Россия", s2 = "Франция";
    string t1 = s2, t2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "t1: " << t1 << ", t2: " << t2 << endl;

    return 0;
}