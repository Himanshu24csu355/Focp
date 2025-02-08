#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype> // For tolower() and isalpha()
using namespace std;

// Function to check if the string is a palindrome (ignoring spaces and case sensitivity)
bool isPalindrome(const string& str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        // Skip non-alphabetic characters
        if (!isalpha(str[start])) {
            start++;
        } else if (!isalpha(str[end])) {
            end--;
        } else {
            // Check case-insensitive characters
            if (tolower(str[start]) != tolower(str[end])) {
                return false;
            }
            start++;
            end--;
        }
    }
    return true;
}

// Function to count and display the frequency of each character in the string
void countCharacterFrequency(const string& str) {
    unordered_map<char, int> freq;

    for (char ch : str) {
        if (isalpha(ch)) {
            freq[tolower(ch)]++;  // Count case-insensitive frequency
        }
    }

    cout << "Character frequencies (case insensitive):\n";
    for (const auto& pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

// Function to replace vowels in the string with a specific character
void replaceVowels(string& str, char replaceWith) {
    for (char& ch : str) {
        if (isalpha(ch)) {
            char lowerCh = tolower(ch);
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                ch = replaceWith;  // Replace vowel with specified character
            }
        }
    }
}

int main() {
    string inputStr;
    char replaceChar;

    // Accept a string from the user
    cout << "Enter a string: ";
    getline(cin, inputStr);

    // Check if the string is a palindrome
    if (isPalindrome(inputStr)) {
        cout << "The string is a palindrome (ignoring spaces and case sensitivity)." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }

    // Count and display frequency of each character (case insensitive)
    countCharacterFrequency(inputStr);

    // Accept character to replace vowels
    cout << "Enter a character to replace all vowels: ";
    cin >> replaceChar;

    // Replace vowels in the string
    replaceVowels(inputStr, replaceChar);

    // Display the modified string
    cout << "String after replacing vowels: " << inputStr << endl;

    return 0;
}
