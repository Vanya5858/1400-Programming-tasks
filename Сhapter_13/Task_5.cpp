#include <iostream>
#include <string>
using namespace std;

struct Mountain {
    string name;
    int height;
};

void printHighPeaks(Mountain mountains[], int n) {
    for (int i = 0; i < n; i++) {
        if (mountains[i].height > 3000) {
            cout << mountains[i].name << endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    Mountain mountains[15] = {
        {"Эверест", 8848},
        {"Аконкагуа", 6961},
        {"Мак-Кинли", 6194},
        {"Килиманджаро", 5895},
        {"Эльбрус", 5642},
        {"Монблан", 4810},
        {"Говерла", 2061},
        {"Роман-Кош", 1545},
        {"Белуха", 4506},
        {"Казбек", 5033},
        {"Денали", 6190},
        {"Чогори", 8611},
        {"Лхоцзе", 8516},
        {"Макалу", 8485},
        {"Канченджанга", 8586}
    };

    printHighPeaks(mountains, 15);

    return 0;
}