#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string kurs = "курсор";
    string tantsor = "танцор";

    cout << "Исходное слово: " << kurs << endl;
    cout << "После замены букв: " << tantsor << endl;

    // Показываем замены:
    cout << "Замены: к->т, у->а, р->н, с->ц, о->о, р->р" << endl;

    return 0;
}