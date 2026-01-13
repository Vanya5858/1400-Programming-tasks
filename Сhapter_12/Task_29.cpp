#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string virus = "вирус";
    string fokus = "фокус";

    cout << "Исходное слово: " << virus << endl;
    cout << "После замены букв: " << fokus << endl;

    // Показываем замены:
    cout << "Замены: в->ф, и->о, р->к, у->у, с->с" << endl;

    return 0;
}