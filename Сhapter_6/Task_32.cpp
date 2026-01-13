#include <iostream>
using namespace std;

int main() {
    double distance = 10;
    double total = 10;
    int day = 1;
    bool found1 = false, found2 = false;

    while (!found1 || !found2) {
        day++;
        distance *= 1.1;
        total += distance;

        if (!found1 && distance > 20) {
            cout << "a) День: " << day << endl;
            found1 = true;
        }

        if (!found2 && total > 100) {
            cout << "б) День: " << day << endl;
            found2 = true;
        }
    }

    return 0;
}