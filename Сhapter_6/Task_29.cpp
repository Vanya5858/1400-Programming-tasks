#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int num = 100;

    while (count < 10) {
        if (num % 10 == 7 && num % 9 == 0) {
            cout << num << endl;
            count++;
        }
        num++;
    }

    return 0;
}