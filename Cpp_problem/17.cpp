/*Decimal to Binary (recursive)
........The Problem...........
Convert a decimal number to binary number using a recursive function.
.......Hints.......
After coding for a while, recursive will become fun. Until then, recursive functions might feel like confusing magic.
So, don’t worry if you felt confused. You are not alone. I am in the same condition as well.*/


#include <iostream>
using namespace std;

// Recursive function to convert decimal to binary
void decimalToBinary(int n) {
    if (n > 1) {
        // Recursive call
        decimalToBinary(n / 2);
    }
    // Print the remainder (binary digit)
    cout << n % 2;
}

int main() {
    int decimalNumber;

    // Asking user for input
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    cout << "Binary equivalent: ";
    
    // Function call to convert decimal to binary
    decimalToBinary(decimalNumber);
    
    cout << endl;

    return 0;
}
