#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int num = 500;

    while (count < 20) {
        if (num % 13 == 0 || num % 17 == 0) {
            cout << num << endl;
            count++;
        }
        num++;
    }

    return 0;
}