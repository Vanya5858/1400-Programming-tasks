#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string city1, city2, city3;
    cout << "Введите первый город: ";
    getline(cin, city1);
    cout << "Введите второй город: ";
    getline(cin, city2);
    cout << "Введите третий город: ";
    getline(cin, city3);

    string longest = city1, shortest = city1;

    if (city2.length() > longest.length()) longest = city2;
    if (city3.length() > longest.length()) longest = city3;

    if (city2.length() < shortest.length()) shortest = city2;
    if (city3.length() < shortest.length()) shortest = city3;

    cout << "Самое длинное название: " << longest << endl;
    cout << "Самое короткое название: " << shortest << endl;

    return 0;
}