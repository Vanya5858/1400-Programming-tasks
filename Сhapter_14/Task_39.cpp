#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Функция проверки, является ли слово палиндромом
bool isPalindromeWord(const string& word) {
    string cleanedWord;

    // Убираем не-буквы и приводим к нижнему регистру
    for (char ch : word) {
        if (isalpha(ch)) {
            cleanedWord += tolower(ch);
        }
    }

    string reversedWord = cleanedWord;
    reverse(reversedWord.begin(), reversedWord.end());

    return cleanedWord == reversedWord;
}

int main() {
    setlocale(LC_ALL, "RU");

    string word1, word2, word3;

    cout << "Введите три слова:" << endl;
    cout << "Слово 1: ";
    cin >> word1;
    cout << "Слово 2: ";
    cin >> word2;
    cout << "Слово 3: ";
    cin >> word3;

    bool isWord1Palindrome = isPalindromeWord(word1);
    bool isWord2Palindrome = isPalindromeWord(word2);
    bool isWord3Palindrome = isPalindromeWord(word3);

    cout << "\nРезультат:" << endl;
    cout << "Слово \"" << word1 << "\" " << (isWord1Palindrome ? "является" : "не является") << " палиндромом" << endl;
    cout << "Слово \"" << word2 << "\" " << (isWord2Palindrome ? "является" : "не является") << " палиндромом" << endl;
    cout << "Слово \"" << word3 << "\" " << (isWord3Palindrome ? "является" : "не является") << " палиндромом" << endl;

    if (isWord1Palindrome || isWord2Palindrome || isWord3Palindrome) {
        cout << "Хотя бы одно из слов является палиндромом" << endl;
    }
    else {
        cout << "Ни одно из слов не является палиндромом" << endl;
    }

    return 0;
}