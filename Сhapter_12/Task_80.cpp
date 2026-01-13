#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string filepath;
    cout << "Введите полное имя файла: ";
    getline(cin, filepath);

    cout << "Разбор пути:\n";
    size_t start = 0;
    size_t end = filepath.find('\\');

    while (end != string::npos) {
        cout << filepath.substr(start, end - start) << "\n";
        start = end + 1;
        end = filepath.find('\\', start);
    }

    // Последняя часть после последнего '\'
    if (start < filepath.length()) {
        cout << filepath.substr(start) << "\n";
    }

    return 0;
}