#include <iostream>
using namespace std;

int main() {
    double deposit = 1000;
    int month = 0;
    bool found1 = false, found2 = false;

    while (!found1 || !found2) {
        month++;
        double increase = deposit * 0.02;
        deposit += increase;

        if (!found1 && increase > 30) {
            cout << "a) Месяц: " << month << endl;
            found1 = true;
        }

        if (!found2 && deposit > 1200) {
            cout << "б) Месяцев: " << month << endl;
            found2 = true;
        }
    }

    return 0;
}