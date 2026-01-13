#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int num = 100;

    while (count < 15) {
        if (num % 19 == 0) {
            cout << num << endl;
            count++;
        }
        num++;
    }

    return 0;
}