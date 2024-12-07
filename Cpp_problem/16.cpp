/*Celsius to Fahrenheit
.........The problem...........
Take the temperature in degrees Celsius and convert it to Fahrenheit.
Hins:
To convert degrees Celsius temperature to Fahrenheit, you have to multiply by 9 and divide by 5.
And then, add 32.
Think for a second...How will you multiply a variable by 9 and then divide by 5? and then add 32. Can you do it without looking at the solution?*/


#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Asking user to input temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit using the formula
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Output the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
