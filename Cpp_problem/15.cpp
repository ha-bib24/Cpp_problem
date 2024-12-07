/*Remove duplicate characters
.......The problem...........
For a given string, remove all duplicate characters from that string.
..........Hints.............
Create a result string. Then loop through the string and check whether the current character not in the string. If it is not, then add it. Otherwise, it’s already there adding it will make it duplicate.*/

#include <iostream>
#include <string>
#include <unordered_set>  // For keeping track of seen characters

using namespace std;

string removeDuplicates(const string& str) {
    string result = "";  // To store the final string without duplicates
    unordered_set<char> seen;  // To track characters that have already appeared

    for (char ch : str) {
        // If the character is not already in the set, add it to the result
        if (seen.find(ch) == seen.end()) {
            result += ch;
            seen.insert(ch);  // Mark this character as seen
        }
    }

    return result;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);

    string result = removeDuplicates(input);
    
    cout << "String after removing duplicates: " << result << endl;

    return 0;
}
