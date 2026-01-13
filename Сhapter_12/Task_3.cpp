#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string novel, author;
    cout << "Введите название романа: ";
    getline(cin, novel);
    cout << "Введите фамилию автора: ";
    getline(cin, author);
    cout << "Писатель " << author << " – автор романа " << novel << endl;

    return 0;
}