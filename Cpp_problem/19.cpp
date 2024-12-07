#include <iostream>
using namespace std;

int main() {
    double miles, kilometers;
    
    // Input: Ask the user to enter the number of miles
    cout << "Enter the distance in miles: ";
    cin >> miles;
    
    // Conversion: 1 mile = 1.609344 kilometers
    kilometers = miles * 1.609344;
    
    // Output: Display the result
    cout << miles << " miles is equal to " << kilometers << " kilometers." << endl;
    
    return 0;
}
