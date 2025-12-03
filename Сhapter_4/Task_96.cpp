#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int k;
    cout << "Введите k (1-252): ";
    cin >> k;

    int position = k;


    if (position <= 100) {
        int number_index = (position - 1) / 2; 
        int number = 50 + number_index;
        int digit_pos = (position - 1) % 2; 

        if (digit_pos == 0) {
            cout << number / 10 << endl;
        }
        else {
            cout << number % 10 << endl;
        }
    }
    else {
       
        position -= 100; 

        int number_index = (position - 1) / 3; 
        int number = 100 + number_index;
        int digit_pos = (position - 1) % 3;

        if (digit_pos == 0) {
            cout << number / 100 << endl;
        }
        else if (digit_pos == 1) {
            cout << (number / 10) % 10 << endl;
        }
        else {
            cout << number % 10 << endl;
        }
    }

    return 0;
}