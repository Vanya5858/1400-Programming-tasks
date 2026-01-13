#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int sum = 0, count = 0, product = 1;
    int sumSquares = 0, sumCubes = 0;
    int firstDigit = 0, lastDigit = number % 10;
    int temp = number;

    while (temp > 0) {
        firstDigit = temp % 10;
        temp /= 10;
    }

    temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        count++;
        product *= digit;
        sumSquares += digit * digit;
        sumCubes += digit * digit * digit;
        temp /= 10;
    }

    double average = static_cast<double>(sum) / count;

    cout << sum << endl;
    cout << count << endl;
    cout << product << endl;
    cout << average << endl;
    cout << sumSquares << endl;
    cout << sumCubes << endl;
    cout << firstDigit << endl;
    cout << firstDigit + lastDigit << endl;

    return 0;
}