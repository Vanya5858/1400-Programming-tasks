#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int pages, totalJournal = 0;
    bool readingJournals = false;

    cout << "Введите количество страниц в газетах и журналах (окончание ввода - 0): ";

    while (true) {
        cin >> pages;
        if (pages == 0) break;

        if (pages > 16) {
            totalJournal += pages;
            readingJournals = true;
        }
        else if (readingJournals) {
            break;
        }
    }

    cout << "Общее число страниц во всех журналах = " << totalJournal;
    return 0;
}