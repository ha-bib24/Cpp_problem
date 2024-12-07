/*....The problem......
Check whether the string is a palindrome.
......Hint......
A palindrome is a word, phrase, or sequence that reads the same backward as forwards. For example, the word- madam
If you read it backward it will be madam as well. Similarly, eye, rotor, kayak, racecar, level, etc. are palindromes.
To check a palindrome, just reverse the word or the phrase, and then check whether the reversed string is the same as the initial string.
If both are the same, it will be a palindrome.*/

#include <iostream>
#include <string> // For string operations
using namespace std;

int main() {
    string input, reversed;

    // Input: Get the string from the user
    cout << "Enter a string: ";
    getline(cin, input); // Use getline to allow spaces

    // Reverse the string
    reversed = string(input.rbegin(), input.rend());

    // Check if the original string is the same as the reversed string
    if (input == reversed) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}
