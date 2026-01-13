#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    string word;
    cout << "Введите слово из 12 букв: ";
    cin >> word;

    if (word.length() == 12) {

        string part1 = word.substr(0, 4);      
        string part2 = word.substr(4, 4);     
        string part3 = word.substr(8, 4);   

        string result_a = part2 + part3 + part1;
        cout << "а) " << result_a << endl;


        string result_b = part3 + part1 + part2;
        cout << "б) " << result_b << endl;
    }
    else {
        cout << "Слово должно содержать 12 букв\n";
    }

    return 0;
}