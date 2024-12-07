/*.......The Problem.........
Generate a password. Your password may contain letters in uppercase or lowercase. It also may contain digits or special characters.
..........Hints........
To select a random character from a string, you can import random. Then use the random. choice method. This will select a character from the provided string.
Also, you can import the string module.
This is not just the string type variable. Instead, it has a lot of extra functionalities.
For example, you can use string.ascii_letters to get all the characters a to z both in lowercase and upper case. Similarly, you can use string.digits to get all the single digits. Also, you can use string.punctuation to get all the special characters.*/


#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#include <string>   // For string operations
using namespace std;

// Function to generate a random password
string generatePassword(int length) {
    // Characters to choose from: uppercase, lowercase, digits, and special characters
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:',.<>?/";

    string password = "";  // To store the generated password

    // Seed the random number generator with the current time
    srand(time(0));

    // Randomly pick characters from the set and append to the password
    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % characters.size();  // Random index in the characters string
        password += characters[randomIndex];           // Append the character at randomIndex to the password
    }

    return password;  // Return the generated password
}

int main() {
    int passwordLength;

    // Input: Ask the user for the desired password length
    cout << "Enter the length of the password: ";
    cin >> passwordLength;

    // Generate the random password
    string password = generatePassword(passwordLength);

    // Output: Display the generated password
    cout << "Generated Password: " << password << endl;

    return 0;
}
