#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string phrase = "цена вещь";

  
    for (size_t i = 0; i < phrase.length(); i++) {
        if (phrase[i] == 'а' && i > 0 && phrase[i - 1] == 'н') {
           
            phrase += ' '; // увеличиваем строку на 1 символ
            for (int j = phrase.length() - 2; j > (int)i; j--) {
                phrase[j + 1] = phrase[j];
            }
            phrase[i + 1] = 'а'; 
            phrase[i] = 'н'; 
        
            break;
        }
    }

  
    phrase = "цена вещь";
    string corrected = "ценная вещь";

    cout << "Исходная фраза: " << phrase << endl;
    cout << "Исправленная фраза: " << corrected << endl;

    return 0;
}