/*.........The problem..........
Find the max number of two numbers.
............Hints..........
Ask the user to enter two numbers.
Then, you can run a comparison to compare which one is larger.
Think about it and try yourself first.*/

#include <iostream>
using namespace std;

int main() {
    // Declare variables to hold the two numbers
    double num1, num2;

    // Ask the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Compare the two numbers and find the maximum
    if (num1 > num2) {
        cout << "The maximum number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "The maximum number is: " << num2 << endl;
    } else {
        cout << "Both  numbers are equl." << endl;
   }

    return 0;
}