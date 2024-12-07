/*......The problem.............
Take two inputs from the user. One will be an integer. 
The other will be a float number. 
Then multiply them to display the output.

.............Hints..............
Use input. By default, input gives you a string. 
Then use int and float to convert the input to a number. 
And then multiply them. That’s it.*/

#include <iostream>
using namespace std;
int main() {
    int integerInput;
    float floatInput;

    cout << "Enter an integer: ";
    cin >> integerInput;

    cout << "Enter a float number: ";
    cin >> floatInput;

    float result = integerInput * floatInput;

    cout << "The result is: " << result << endl;

    return 0;
}