#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    // а) Исправляем "процессор"
    string word_a = "процессор";
    for (int i = word_a.length() - 2; i > 4; i--) {
        word_a[i + 1] = word_a[i];
    }
    word_a[5] = 'с'; 

    // б) Исправляем "тесктовыйфайл"
    string phrase_b = "тесктовыйфайл";
    for (size_t i = 5; i < phrase_b.length() - 1; i++) {
        phrase_b[i] = phrase_b[i + 1];
    }
    phrase_b[phrase_b.length() - 1] = '_';
    for (int i = phrase_b.length() - 2; i > 7; i--) {
        phrase_b[i + 1] = phrase_b[i];
    }
    phrase_b[8] = ' ';

    string phrase_c = "програма и аллоритм";
    for (int i = phrase_c.length() - 2; i > 7; i--) {
        phrase_c[i + 1] = phrase_c[i];
    }
    phrase_c[8] = 'м';
    for (size_t i = 0; i < phrase_c.length() - 1; i++) {
        if (phrase_c[i] == 'л' && phrase_c[i + 1] == 'л') {
            swap(phrase_c[i + 1], phrase_c[i + 3]);
            break;
        }
    }


    string phrase_d = "процесор и памлять";
    for (int i = phrase_d.length() - 2; i > 5; i--) {
        phrase_d[i + 1] = phrase_d[i];
    }
    phrase_d[6] = 'с';
 
    for (size_t i = 12; i < phrase_d.length() - 1; i++) {
        phrase_d[i] = phrase_d[i + 1];
    }
    phrase_d[phrase_d.length() - 1] = '_';

    cout << "а) " << word_a << "\n";
    cout << "б) " << phrase_b << "\n";
    cout << "в) " << phrase_c << "\n";
    cout << "г) " << phrase_d << "\n";

    return 0;
}