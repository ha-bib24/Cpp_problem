/*max of three
.........The problem......
Find the largest of the three numbers.
.......Hints..........
Ask the user to enter three numbers.
Then, you can run multiple comparisons to compare which one is the largest.
At first, you can consider that the first number is the largest.
Then compare the second number with the first number and the third number. If the second number is greater or equal to the first number and the second number is greater or equal to the third number, then the second number is the largest.
Similarly, compare the third number with the first or second number.
Otherwise, the first number will be the largest.
Think about it. And try yourself first.*/

#include <iostream>
using namespace std;

int main() {
    // Declare variables to hold the three numbers
    double num1, num2, num3;

    // Ask the user to enter three numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Assume the first number is the largest
    double largest = num1;

    // Compare the second number with the largest
    if (num2 > largest) {
        largest = num2;
    }

    // Compare the third number with the largest
    if (num3 > largest) {
        largest = num3;
    }

    // Output the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}