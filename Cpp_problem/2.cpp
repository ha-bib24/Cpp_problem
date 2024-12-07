#include <iostream>
#include <cmath> // Required for pow function
using namespace std;

int main() {
    double base, exponent, result;

    // Taking base and exponent input from the user
    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent number: ";
    cin >> exponent;

    // Calculating base raised to the power of exponent
    result = pow(base, exponent);

    // Displaying the result
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}